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
    ll n;
    cin>>n;
    ll a[n];
    ll mi=1e18,mx=-1e18,mipos=-1,mxpos=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=mi)
        {
            mi=a[i];
            mipos=i;
        }
        if(a[i]>mx)
        {
            mx=a[i];
            mxpos=i;
        }
    }
    ll cnt=0;
    cnt+=mxpos;
    if(mxpos>mipos)
    {
        mipos+=1;
    }
    cnt+=n-mipos;
    cout<<cnt-1;
}