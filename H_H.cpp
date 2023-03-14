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
ll mx = 20000000;
bool f[20000001];
int main()
{
    fastio();
    ll k = 2;
    vector <pair<ll,ll>> v;
    for (int i = 2; i * i <= mx; i++)
    {
        if (f[i] == 0)
        {
            for (int j = i + i; j <= mx; j += i)
            {
                f[j] = 1;
            }
        }
    }
    for (int i = 3; i <= mx; i += 2)
    {
        if (f[i] == 0 && f[i + 2] == 0)
        {
            v.pb({i,i+2});
        }
    }
    ll n;
    while (cin >> n)
    {
        cout<<"("<<v[n-1].ff<<", "<<v[n-1].ss<<")\n";
    }
}