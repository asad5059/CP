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
    ll n,m;
    cin>>n>>m;
    ll d[n+1]={0};
    for(int i=0;i<m;i++)
    {
        ll x,y; cin>>x>>y;
        d[min(x,y)]++;
    }
    ll ans=0;
    for(int i=1;i<=n;i++) ans+=(d[i]==0);
    ll q; cin>>q;
    while(q--)
    {
        ll t;
        cin>>t;
        if(t==3)
        {
            cout<<ans<<"\n";
            continue;
        }
        else
        {
            ll x,y;
            cin>>x>>y;
            if(t==1)
            {
                d[min(x,y)]++;
                ans-=(d[min(x,y)]==1);
            }
            else if(t==2)
            {
                d[min(x,y)]--;

                ans+=(d[min(x,y)]==0);
            }
        }
    }
}