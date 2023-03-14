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
        ll n, k;
        cin >> n >> k;
        vector <ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll ans = -1;
        bool flag = false;
        while (k--)
        {
            ll i = 0;
            for (; i < n - 1; i++)
            {
                if (v[i] >= v[i + 1])
                    continue;
                else
                {
                    v[i]++;
                    break;
                }
            }
            if (i == n - 1)
            {
                flag = true;
                break;
            }
            ans = i + 1;
        }
        if (flag)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
}
