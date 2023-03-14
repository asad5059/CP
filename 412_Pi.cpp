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
    // fastio();
    ll n;
    while(cin>>n && n)
    {
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(a[i],a[j])==1)
                {
                    cnt++;
                }
            }
        }
        n=n*(n-1)/2;
        double ans=0;
        double k=6*n;
        ans=sqrt((k)/((double)cnt));
        if(cnt>0)
        printf("%.6lf\n",ans);
        else
        printf("No estimate for this data set.\n");
    }
}