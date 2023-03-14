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
ll n, k;

bool ok(ll m)
{
    return ((n - m) * (n - m + 1) / 2 - m) > k;
}
int main()
{
    fastio();
    cin >> n >> k;
    ll l = -1, r = n+5, m;
    while (l + 1 < r)
    {
        m = l - (l - r) / 2;
        if (ok(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << r;
}