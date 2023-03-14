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
        ll n;
        cin >> n;
        ll a[n + 1];
        vector <ll> v[n+1],st;
        ll f[n+1],mp[n+1],ans[n+100];
        memset(f,0,sizeof(f));
        memset(mp,0,sizeof(mp));
        memset(ans,0,sizeof(ans));
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            v[a[i]].pb(i);
            mp[a[i]]++;
        }
        ll k=0;
        for(int i=1;i<=n;i++)
        {
            if(f[i]==0 && mp[i]>0)
            {
                ll x=v[i][0];
                ans[x]=i;
                f[i]=1;
                k++;
            }
            else
            {
                st.push_back(i);
            }
        }
        int j=0;
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==0)
            {
                ans[i]=st[j++];
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==i)
            {
                ll idx=v[a[i]][0];
                swap(ans[idx],ans[i]);
            }
        }
        cout<<k<<"\n";
        for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
}