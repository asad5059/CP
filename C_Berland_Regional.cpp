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
        ll n;
        cin >> n;
        ll u[n], s[n];
        vector<ll> v[n + 1];
        set<ll> uni;
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
            uni.insert(u[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            v[u[i]].pb(s[i]);
        }
        ll sz = -INT_MAX;
        for (auto it : uni)
        {
            ll i = it;
            sort(v[i].begin(), v[i].end(), greater<ll>());
            sz = max((ll)v[i].size(), sz);
        }
        for (int i = 1; i <= n; i++)
        {
            ll sum = 0;
            if (i > sz)
                cout << 0 << " ";
            else
            {
                for (auto j : uni)
                {
                    for (int k = 0; k < v[j].size(); k += i)
                    {
                        if (k + i <= v[j].size())
                        {
                            for (int l = k; l < k + i; l++)
                            {
                                if (k == v[j].size())
                                    break;
                                sum += v[j][l];
                            }
                        }
                    }
                }
                cout << sum << " ";
            }
        }

        cout << endl;
    }
}