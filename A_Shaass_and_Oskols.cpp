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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll m;
    cin >> m;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        if (x)
        {
            v[x - 1] += y - 1;
        }
        if (x + 1 < n)
        {
            v[x + 1] += v[x] - y;
        }
        v[x] = 0;
    }
    for (auto it : v)
        cout << it << endl;
}