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
    ll n,x,y;
    cin>>n>>x>>y;
    set <pair<ll,ll>> shots;
    while(n--)
    {
        ll x1,y1;
        cin>>x1>>y1;
        //slope = (y2-y1)/(x2-x1)
        ll up = y-y1, down= x-x1;
        ll gcd=__gcd(up,down);  //gcd because we need to generalize the fraction. Hence, we can divide it whith their gcd
        up/=gcd;
        down/=gcd;
        shots.insert({up,down});
    }
    cout<<shots.size();
}