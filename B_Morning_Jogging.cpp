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
        ll n, m;
        cin >> n >> m;
        vector<ll> v[m + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                v[i].pb(x);
            }
            if (i % 2 == 0)
                sort(v[i].begin(), v[i].end());
            else
                sort(v[i].begin(), v[i].end(), greater<ll>());
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}