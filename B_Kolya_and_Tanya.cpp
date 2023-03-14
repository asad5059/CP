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
ull bigmod(ll b, ll n,ll m)
{
    ull res=1;
    while(n)
    {
        if(n%2!=0)
        {
            res=(res%m * b%m)%m;
            n--;
        }
        b=(b%m * b%m)%m;
        n=n/2;
    }
    return res%m;
}
int main()
{
    fastio();
    ll n;
    cin >> n;
    ll m=(ll)1e9+7;
    ll a=bigmod(3,n*3,m);
    ll b=bigmod(7,n,m);
    cout<<fix_mod(a-b,m);
}