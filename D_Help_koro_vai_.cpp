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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll b, g, mx;
    cin >> b >> g;
    ll n = b + g;
    mx = max(b, g);
    if (mx == g || g == b)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0 && g > 0)
            {
                cout << "G";
                g--;
            }
            else if (i % 2 == 0 && b > 0)
            {
                cout << "B";
                b--;
            }
            else if (g > 0)
            {
                cout << "G";
                g--;
            }
            else if (b > 0)
            {
                cout << "B";
                b--;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0 && b > 0)
            {
                cout << "B";
                b--;
            }
            else if (i % 2 == 0 && g > 0)
            {
                cout << "G";
                g--;
            }
            else if (g > 0)
            {
                cout << "G";
                g--;
            }
            else if (b > 0)
            {
                cout << "B";
                b--;
            }
        }
    }
}
