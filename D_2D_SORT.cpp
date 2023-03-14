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
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            scanf("%lld%lld", &a, &b);
            v.pb({a, -b});
        }
        sort(v.begin(), v.end());

        for (ll i = 0; i < v.size(); i++)
        {
            printf("%lld %lld\n", v[i].ff, -v[i].ss);
        }
    }
}
