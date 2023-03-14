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
ll n[2000000],k=2000000;
void phi()
{
    for(ll i=1;i<=k;i++)
    {
        n[i]=i;
    }
    for(ll i=2;i<=k;i++)
    {
        if(n[i]==i)
        {
            for(ll j=i;j<=k;j+=i)
            {
                n[j]/=i;
                n[j]*=(i-1);
            }
        }
    }
}
int main()
{
    fastio();
    phi();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        cout<<n[x]<<"\n";
    }
}