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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        for (ll i = 1; i < k; i++)
        {
            ll mi = 9, mx = 0, f = n;
            while (f)
            {
                mi = min(mi, f % 10);
                mx = max(mx, f % 10);
                f /= 10;
            }
            if (mi==0)
                break;
            n += (mi * mx);
        }
        cout << n << endl;
    }
}