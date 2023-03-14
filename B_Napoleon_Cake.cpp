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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        ll x=a[n-1];
        for(int i=n-1;i>=0;i--,x--)
        {
            x=max(x,a[i]);
            if(x>0)
            b[i]=1;
        }
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<"\n";

    }
}