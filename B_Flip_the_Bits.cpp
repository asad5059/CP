#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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
        string a, b;
        cin >> a >> b;
        ll p[n] = {0}, p1[n] = {0};
        if (a[0] == '1')
            p[0]++;
        if (a[0] == '0')
            p1[0]++;
        for (int i = 1; i < n; i++)
        {
            p[i] = p[i - 1];
            p1[i] = p1[i - 1];
            if (a[i] == '1')
                p[i]++;
            if (a[i] == '0')
                p1[i]++;
        }
        bool ok = true;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (cnt % 2 == 0)
            {
                if (a[i] != b[i])
                {
                    if (p[i] != p1[i])
                        ok = false;
                    ++cnt;
                }
            }
            else
            {
                if (a[i] == b[i])
                {
                    if (p[i] != p1[i])
                        ok = false;
                    ++cnt;
                }
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}