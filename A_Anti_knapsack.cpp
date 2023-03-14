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
        int n, k;
        cin >> n >> k;
        vector<ll> v;
        for (int i = k + 1; i <= n; i++)
            v.pb(i);
        for (int i = 1; i <= k / 2; i++)
            v.pb(k - i);
        cout << v.size() << '\n';
        for (auto it : v)
            cout << it << ' ';
        cout << '\n';
    }
}