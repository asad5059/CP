#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v, v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    v2 = v;
    sort(v.begin(), v.end());
    ll r;
    if (k > 0)
    {
        r = v[k - 1];
        r++;
    }
    else
    {
        r = v[0];
        r--;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (r >= v2[i])
        {
            cnt++;
        }
    }

    if (cnt == k)
        cout << r;
    else
    {
        cout << -1;
    }
}