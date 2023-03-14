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
ll f(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return n/i;
        }
    }
    return -1;
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    cout<<n<<" ";
    if(n==1) return 0;
    while(n>=2)
    {
        ll d=f(n);
        if(d==-1) break;
        cout<<d<<" ";
        n=d;
    }
    cout<<1;
}