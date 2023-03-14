#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll brut(ll l,ll r)
{
    ll mx=-1;
    for(ll i=l;i<=r;i++)
    {
        for(ll j=i;j<=r;j++)
        {
            mx=max(mx,fix_mod(j,i));
        }
    }
    return mx;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r,i;
        cin >> l >> r;
        ll mx=r/2;
        if(l>mx)
        {
            cout<<r%l<<"\n";
        }
        else if(l<=mx)
        {
            ll x=r%mx,y=r%(mx+1);
            cout<<max(x,y)<<'\n';
        }
    }
}