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
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll a[10010], n;
        cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> n;

        for (int i = 6; i <= n; i++)
        {
            a[i] = (a[i - 1] % 10000007 + a[i - 2] % 10000007 + a[i - 3] % 10000007 + a[i - 4] % 10000007 + a[i - 5] % 10000007 + a[i - 6] % 10000007);
        }
        cout << a[n] % 10000007 << endl;
    }
}