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
        n=2*n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool f = 0;
        while (!f)
        {
            ll cnt = 0;
            if (a[0] == (ll)((a[1] + a[n - 1])/2))
            {
                swap(a[0], a[1]);
                cnt++;
            }
            if (a[n - 1] == (ll)((a[0] + a[n - 2])/2) && n)
            {
                cnt++;
                swap(a[n - 1], a[0]);
            }
            for (int i = 1; i < n-1; i++)
            {
                if (a[i] ==(ll) ((a[i + 1] + a[i - 1]) / 2))
                {
                    swap(a[i], a[i + 1]);
                    cnt++;
                }
            }
            if (cnt == 0)
                f = 1;
        }
        for (auto i : a)
            cout << i << " ";
        cout << "\n";
    }
}