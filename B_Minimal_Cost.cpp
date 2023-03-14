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
        ll n, u, v;
        cin >> n >> u >> v;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        bool f1 = true, f2 = false;
        for (ll i = 1; i < n; i++)
        {
            if (vec[i] != vec[i - 1])
                f2 = true;
            if (abs(vec[i] - vec[i - 1]) > 1)
                f1 = false;
        }
        if (!f1)
        {
            cout << 0 << endl;
            continue;
        }
        if (f2)
        {
            cout << min(u, v) << endl;
            continue;
        }
        cout << min(u + v, 2 * v) << endl;
    }
}