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
    ll n, t, j = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll sq = ceil(sqrt(n));
        ll r = sq * sq - n;
        ll x, y;
        if (r < sq)
        {
            y = r + 1;
            x = sq;
        }
        else
        {
            x = 2 * sq - r - 1;
            y = sq;
        }
        if (sq & 1)
            swap(x, y);
        printf("Case %lld: %lld %lld\n", ++j, x, y);
    }
    return 0;
}