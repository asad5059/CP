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
ll C(ll n,ll r)
{
    r=n-r;
    if(r==0) return 1;
    ll up=1,down=1;
    while(r)
    {
        up*=n;
        down*=r;
        n--;
        r--;
        ll k=__gcd(up,down);
        up/=k;
        down/=k;
    }
    return up;

}
int main()
{
    fastio();
    ll n, m;
    while (cin >> n >> m && n > 0 && m > 0)
    {
        ll ans=C(n,m);
        printf("%lld things taken %lld at a time is %lld exactly.\n", n, m, ans);
    }
}