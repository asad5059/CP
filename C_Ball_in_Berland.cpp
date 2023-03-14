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
        int b, g, k;
        cin >> b >> g >> k;
        vector<ll> v1(k), v2(k);
        map<int, int> m1, m2;
        for (ll i = 0; i < k; i++)
        {
            cin >> v1[i];
            m1[v1[i]]++;
        }
        for (ll i = 0; i < k; i++)
        {
            cin >> v2[i];
            m2[v2[i]]++;
        }
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            ans += k - (i + 1) - m1[v1[i]] - m2[v2[i]] + 2;
            cout<<ans<<endl;
            m1[v1[i]]--;
            m2[v2[i]]--;
        }
        cout << ans << endl;
    }
}
