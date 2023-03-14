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
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector <ll> v(n),v1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v1.pb(v[i]);
        }
        sort(v1.begin(),v1.end());
        ll j=1;
        map<ll,ll> mp;
        for(auto i:v1)
        {
            mp[i]=j++;
        }
        ll cnt=1;
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                cnt++;
            }
            else
            {
                if((mp[v[i]]-mp[v[i-1]])!=1)
                cnt++;
            }
        }
        // cout<<cnt<<" ";
        if(cnt<=k)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}