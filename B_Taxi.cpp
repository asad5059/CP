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
    map<ll, ll> mp;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
        mp[x]++;
    }
    ll ans = 0;
    ans = mp[4];
    mp[4] = 0;
    ll k = min(mp[3], mp[1]);
    ans += k;
    mp[3] -= k;
    mp[1] -= k;
    ans += mp[3];
    mp[3] = 0;
    if (mp[2] % 2 == 0)
    {
        ans += mp[2] / 2;
        mp[2] = 0;
    }
    
    ll tot=2*mp[2]+mp[1];
    ans+=(int)ceil(tot/4.0);
    
    cout << ans;
}
// 2 2 2 2 = 2