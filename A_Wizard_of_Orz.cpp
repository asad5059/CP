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
        ll n;
        cin >> n;
        int x = 8;
        cout << 9;
        for (int i = 0; i < n - 1; i++)
        {
            cout << x;
            if (x < 9)
            {
                x++;
            }
            else
            {
                x = 0;
            }
        }
        cout << endl;
    }
}
