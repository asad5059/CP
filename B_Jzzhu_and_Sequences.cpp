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
    ll x,y,n,m=1e9+7;
    cin>>x>>y>>n;
    // cout<<x<<" "<<y<<" ";
    ll arr[7];
    arr[0]=0;
    arr[1]=x;
    arr[2]=y;
    for(int i=3;i<=6;i++)
    {
        ll k=y-x;
        arr[i]=k;
        x=y;
        y=k;
    }
    ll k=n%6;
    if(k==0)
    k=6;
    cout<<fix_mod(arr[k],m);

}