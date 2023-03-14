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
    ll  count = 0,n;
    cin >> n;
    vector<pair<ll, ll>> v;
    while (n--)
    {
        ll x,y;
        cin >> x >> y;
        v.pb(make_pair(x, y));
    }

    for (ll i = 0; i < v.size(); i++)
    {
        double k = v[i].ff;
        double k1 = v[i].ss;
        for (ll j = i + 1; j < v.size(); j++)
        {
            double w = v[j].ff, q = v[j].ss;
            double ans = (q - k1) / (w - k);

            if (ans >= -1.0 && ans <= 1.0)
                count++;
        }
    }

    cout << count << endl;
}
