#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    ll n, m, tot = 0;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb({y, x});
        tot += x * y;
    }
    sort(v.begin(), v.end());
    ll cnt = 0, ans = 0, pos = m - 1;
    while (cnt < n && ans < tot)
    {

        ans += min(v[pos].ss, n - cnt) * v[pos].ff;
        cnt += min(v[pos].ss, n - cnt);

        pos--;
        // cout<<ans<<" "<<cnt<<endl;
    }
    cout << ans;
}