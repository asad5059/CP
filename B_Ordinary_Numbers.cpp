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
    set<ll> s;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            ll x = i,nn=0,xx=1;
            while (x--)
            {
                nn+=j*xx;
                xx*=10;
            }
            s.insert(nn);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (auto i : s)
        {
            if (i > n)
                break;
            else
                cnt++;
        }
        cout << cnt << "\n";
    }
}
