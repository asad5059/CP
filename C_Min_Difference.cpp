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
ll n,m,ans=1e18;
ll f(ll a[],ll b[])
{
    ans=1e18;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans=min(ans,abs(a[i]-b[j]));
        }
    }
    return ans;
}
int main()
{
    fastio();
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    sort(a,a+n);
    sort(b,b+m);
    ll x=1e18,i=0,j=0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) < x)
            x = abs(a[i] - b[j]);
 
        if (a[i] < b[j])
            i++;
 
        else
            j++;
    } 
    cout<<x;
    
}