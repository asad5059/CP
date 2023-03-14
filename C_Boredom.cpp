#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
ll n,mx=-INF;
ll a[100009];
ll mp[100009];
ll dp[100009];
int main()
{
    fastio();
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i]; mp[a[i]]++;
        mx=max(mx,a[i]);
    }
    dp[0]=0;
    dp[1]=mp[1];
    for(int i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+mp[i]*i);
    }
    cout<<dp[mx];
}