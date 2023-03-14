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
ll n, m, x;
bool ok(ll mid)
{
    ll k = 1, now = 0;
    for (ll j = 0; j <n; j++)
    {
        if (now + v[j] > mid)
            k++, now = v[j];
        else
            now += v[j];
    }
    return k>m;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int ff = 1; ff <= t; ff++)
    {
        cin>>n>>m;
        ll l, r,mid;
        l = r = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            v.pb(x);
            l = max(l, x);
            r += x;
        }
        l--;
        while (l + 1 < r)
        {
            mid = (l + r) / 2;
            if (ok(mid))
                l = mid;
            else
                r = mid;
        }
        cout<<"Case "<<ff<<": "<<r<<"\n";
        v.clear();
    }
}