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
ll n, d;
vector<pair<ll, ll>> v, v1;
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    cin >> n >> d;
    v = vector<pair<ll, ll>>(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].ff >> v[i].ss;
    sort(v.rbegin(), v.rend());
    // for (auto i : v)
    //     cout << i.ff << " " << i.ss << "\n";
    ll ans = 0, mx = -1e18;
    ll l = 0, r = 0, cnt = 0;
    while (r <v.size())
    {
        cnt+=v[r].ss;
        while(v[l].ff-v[r].ff>=d)
        {
            cnt-=v[l].ss;
            l++;
        }
        ans=max(ans,cnt);
        r++;
    }
    ans=max(ans,cnt);
    // cout<<l<<" "<<r<<" "<<cnt;
    cout << ans;
}