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
    ll n, x;
    cin >> n;
    ll f = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            cout << x / 2 << '\n';
        }
        else
        {
            cout << (x + f) / 2 << '\n';
            f *= -1;
        }
    }
}