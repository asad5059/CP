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
        bool f = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            f = 1;
        }
        ll v = sqrt(n);
        if (v * v == n && f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}