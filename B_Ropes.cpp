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
vector<ll> v;
ll n, k;

bool ok(double mid)
{
    ll sum = 0;
    double q;
    for (ll i = 0; i < v.size(); i++)
    {
        q= v[i] / mid;
        sum+=q;
    }
    return sum>=k;
}
int main()
{
    fastio();
    cin >> n >> k;
    v = vector<ll>(n);
    for (auto &x : v)
        cin >> x;
    double l = 0, r = 1e18, mid;
    while(abs(l-r)>=1e-7)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid;
        }
        else
            r = mid;
    }
    printf("%.6lf\n",l);
}