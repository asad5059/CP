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
double f(double m,ll p1,ll p2)
{
    double x1=p1+m,x2=p2-m;
    return abs(x1-x2);
}
int main()
{
    fastio();
    int n;
    double len;
    cin>>n>>len;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        double ans=max(abs(a[0]-0),abs(a[0]-len));
        cout<<ans;
        return 0;
    }
    sort(a,a+n);
    ll mx=-1e18,p1=-1,p2=-1;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i-1])>mx)
        {
            mx=abs(a[i]-a[i-1]);
            p1=i-1;
            p2=i;
        }
    }
    
    double l=0,r=abs(a[p1]-a[p2]),mid;
    while(abs(r-l)>1e-6)
    {
        mid=(l+r)/2.0;
        // cout<<l<<" "<<r<<"\n";
        if(f(mid,a[p1],a[p2])<=1e-6)
        {
            l=mid;
        }
        else
        r=mid;
    }
    double ans=max(max(l,(double)abs(a[0]-0)),(double)abs(a[n-1]-len));
    cout<<fixed<<ans<<setprecision(15);

    ///ALT Soln
    /*
    double mx=0;
    for(int i=1;i<n;i++)
    {
        mx=max(mx,a[i]-a[i-1]);
    }
    mx/=2.0;
    mx=max(mx,a[0]);
    mx=max(mx,len-a[n-1]);
    printf("%.17f",mx);
    
    */
}
// 9+2.5 = 11.5
// 14-2.5 =11.5