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
    cout<<abs(-3-2);
    ll a,b,n,w=0;
    cin>>a>>b>>n;
    while(1)
    {
        if(w==0)
        {
            ll r=__gcd(n,a);
            if(n<r)
            {
                cout<<1;
                return 0;
            }
            n-=r;
        }
        else
        {
            ll r=__gcd(n,b);
            if(n<r)
            {
                cout<<0;
                return 0;
            }
            n-=r;
        }
        w=w^1;
    }
}