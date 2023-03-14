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
ull a[1000000];
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ull start = 0;
        for (int i = 1; i <= n - 1; i++)
            start += abs(a[i] - a[i + 1]);
        int ans = min((ull)start - abs(a[1] - a[2]),
                     (ull) start - abs(a[n] - a[n - 1]));
        for (int i = 2; i <= n - 1; i++)
            ans = min(ans,
                      (ull)start - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]));
        cout << ans << "\n";
    }
}
