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
ll dp[1000010];
ll f(ll n)
{
    // cout<<n<<endl;
    if(dp[n]!=-1)
    return dp[n];
    if(n<=0)
    {
        if(n==0)
        return 1;
        else
        return 0;
    }
    ll b=1e18,k=n;
    while(k)
    {
        ll r=k%10;
        k/=10;
        if(n-r>=0 && r!=0)
        {
            b=min(1+f(n-r),b);
        }
    }
    return dp[n]=b;
}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    cout<<f(n)-1;
}