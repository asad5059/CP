#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, mx;
        cin >> n >> k;
        ll a[n];
        ll ans[n];
        memset(ans,0,sizeof(ans));
        map<ll, vector<ll>> mp;
        vector <pair<ll,ll>> extra;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].pb(i);
        }
        for(auto i:mp)
        {
            if(i.ss.size()>=k)
            {
                ll p=0;
                for(int j=1;j<=k;j++)
                {
                    ans[i.ss[p++]]=j;
                }
            }
            else
            {
                for(int j=0;j<i.ss.size();j++)
                {
                    extra.push_back({i.ff,i.ss[j]});
                }
            }
        }
        ll sz=extra.size(),p=1;
        for(int i=0;i<sz-(sz%k);i++)
        {
            ans[extra[i].ss]=p++;
            if(p>k) p=1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}