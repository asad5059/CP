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
    ll n, t;
    cin >> n >> t;
    ll a[n], b[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            b[i] = a[i];
        else
            b[i] = a[i] + b[i - 1];
    }
    if (b[n - 1] - 0 <= t)
    {
        cout << n;
        return 0;
    }
    ll sum = 0, cnt = 0, st = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > t)
        {
            while (sum > t)
            {
                sum -= a[st++];
                cnt--;
            }
        }
        cnt++;
        mx = max(mx, cnt);
    }
    cout << mx;
}