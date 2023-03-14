#include <bits/stdc++.h>
#include <iostream>
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
        ll n, m;
        cin >> n;
        ll a[n];
       for(ll i=0;i<=n-1;i++)
            cin >> a[i];
        cin >> m;
        ll a2[m];
        for(ll i=0;i<=m-1;i++)
            cin >> a2[i];
        ll p[n + 1], p2[m + 1];
        p[0] = 0;
        p2[0] = 0;
        for (int i = 0; i < n; i++)
        {
            p[i + 1] = p[i] + a[i];
        }
        for (int i = 0; i < m; i++)
        {
            p2[i + 1] = p2[i] + a2[i];
        }
        ll mx1 = 0, mx2 = 0;
        for (int i = 0; i <= n; i++)
        {
            mx1 = max(mx1, p[i]);
        }
        for (int i = 0; i <=m; i++)
        {
            mx2 = max(mx2, p2[i]);
        }
        cout << mx1 + mx2 << endl;
    }
}
