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
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        ll mi=1e18;
        ll mx=-1e18;
        ll cnt=0;
        for(int j=i;j<n;j++)
        {
            mi=min(a[j],mi);
            mx=max(mx,a[j]);
            if(abs(mi-mx)>1)
            break;
            cnt++;
        }
        ans=max(ans,cnt);
        if(ans>=n-i)
        break;
    }
    cout<<ans;
}