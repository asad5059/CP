#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q, x, y;
        cin >> n >> q;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            v.push_back(m);
        }
        for (ll i = 0; i < 2; i++)
        {
            ll cnt = 0;
            cin >> x >> y;
            v[x - 1] = y;
            for (ll j = 1; j < v.size(); j++)
            {
                if(j==n-1)
                {
                    cnt++;
                    break;
                }
                if(v[j]!=v[j-1])
                cnt++;
                else
                {
                    break;
                }
            }
            cout << cnt+1 << endl;
            cnt = 0;
        }
    }
}