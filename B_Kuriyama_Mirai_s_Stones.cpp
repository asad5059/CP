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
    ll a[n],b[n],s1[n],s2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(i==0)
        s1[0]=a[i];
        else
        s1[i]=s1[i-1]+a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        s2[0]=a[i];
        else
        s2[i]=s2[i-1]+a[i];
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,l,r;
        cin>>x>>l>>r;
        if(x==1)
        {
            cout<<s1[r-1]-s1[l-1]+b[l-1]<<"\n";
        }
        else
        {
            cout<<s2[r-1]-s2[l-1]+a[l-1]<<"\n";
            
        }
    }
    
}
