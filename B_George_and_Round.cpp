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
    ll n, m, cnt = 0;
    cin >> n >> m;
    vector <ll> a,b;
    for(int i=0;i<n;i++)
    {
        ll x; cin>>x; a.pb(x);
    }
    for(int j=0;j<m;j++)
    {
        ll x; cin>>x; b.pb(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++)
    {
        if(b[i]>=a[cnt]) cnt++;
        if(cnt==n) break;
    }
    cout<<n-cnt;
}