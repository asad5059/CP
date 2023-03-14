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
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll n, k;
    cin >> n >> k;
    ll a[n+1], b[n+1];
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    ll ans,mi=b[k],pos=0;
    for(int i=k+1;i<=n;i++)
    {
        if(b[i]-b[i-k]<mi)
        {
            mi=b[i]-b[i-k];
            pos=i-k;
        }
    }
    cout<<pos+1;
}
// 0 3 4 8 9 13 19 21 22 26