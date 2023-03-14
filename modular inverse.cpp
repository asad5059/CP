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
ll binpow(ll a,ll n)
{
    ll res=1;
    ll m=n+2;
    while(n)
    {
        if(n%2)
        {
            n--;
            res=(res%m*a%m)%m;
        }
        else
        {
            a=(a%m*a%m)%m;
            n/=2;
        }
    }
    return res;
}
ll modinv(ll a,ll n)
{
    ll x=binpow(a,n-2);
    return x;
}
int main()
{
    fastio();
    ll n,m;
    cin>>n>>m;
    cout<<modinv(n,m);
}