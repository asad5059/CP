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
    ll r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1==y2)
    {
        cout<<0;
        return 0;
    }
    ll dis=ceil(sqrt(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2)));
    dis=ceil(dis/(double)(2*r));
    cout<<dis;
}