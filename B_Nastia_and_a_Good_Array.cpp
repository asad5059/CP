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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll p = 1000000007;
        cout << (n + 1) / 2 << endl;
        for (ll i = 0; i < n; i += 2)
        {
            if (i == n - 1)
                continue;
            cout << i + 1 << " " << i + 2 << " " << p << " " << min(a[i], a[i + 1]) << endl;
            a[i + 1] = min(a[i], a[i + 1]);
        }
        if (n % 2 == 1)
            cout << n - 1 << " " << n << " " << min(a[n - 1], a[n - 2]) << " " << p << endl;
            // for(int i=0;i<n;i++)
            // {
            //     cout<<a[i]<<" ";
            // }
            // cout<<"\n";
    }
}
