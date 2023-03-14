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
ll n, m, x;
int main()
{
    fastio();
    cin >> n >> m;
    set<ll> s;
    map<ll, ll> mp;
    vector<ll> v;
    map<ll, ll> dp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
        s.insert(x);
        mp[x]++;
    }
    int j = 0;
    for (int i = 0; i <n; i++)
    {
        dp[i+1]=s.size();
        mp[v[i]]--;
        if(!mp[v[i]]) s.erase(v[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        cout << dp[x] << endl;
    }
}