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
ll binpow(ll b,ll p,ll m)
{
    ll res=1;
    while(p>0)
    {
        if(p%2!=0)
        {
            res=(res%m*b%m)%m;
            p--;
        }
        b=(b%m*b%m)%m;
        p/=2;
    }
    return res;
}
int main()
{
    fastio();
    ll b, p, m; //b^p % m
    while (cin >> b >> p >> m)
    {
        ll ans = binpow(b,p,m);
        cout << ans << endl;
    }
}