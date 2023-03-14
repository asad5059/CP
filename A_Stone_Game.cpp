#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll mi = INT_MAX, ma = INT_MIN, mii, mx;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mi)
            {
                mi = v[i];
                mii = i;
            }
            if (v[i] > ma)
            {
                ma = v[i];
                mx = i;
            }
        }
        ll ans = INT_MAX;
        ans = min(ans, (ll)max(mx, mii)) + 1;
        ans = min(ans, (ll)max(n - mx, n - mii));
        ans = min(ans, n - mii + mx + 1);
        ans = min(ans, n - mx + mii + 1);

        cout << ans << "\n";
    }
}