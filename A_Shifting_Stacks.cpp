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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;

        ll cnt = v[0];
        bool flag = true;

        v[0] = 0;
        for (int i = 1; i < n; i++)
        {
            cnt += v[i];
            if (cnt < i)
                flag = false;
            else
                cnt -= i;
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}