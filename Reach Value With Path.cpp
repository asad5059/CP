//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
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
ll n;
map<ll, ll> mp, mp2;
bool ok(ll x)
{
    if (x >= n)
    {
        if(x==n)
        mp2[x]=1;
        return x==n;
    }
    if (mp[x])
        return mp[x];
    bool a = 0, b = 0;
    a = ok(x * 10);
    b = ok(x * 20);

    if (a == 1 && b == 0)
    {
        mp2[x] = 10;
        mp[x]=1;
    }
    if (b == 1 && a == 0)
    {
        mp2[x] = 20;
        mp[x]=1;
    }
    if (a == 1 && b == 1)
        mp2[x] = a, mp[x]=1;
    return mp[x];
}
void g(ll x)
{
    cout << x << endl;
    if (x >= n)
    {
        return;
    }
    if (mp2[x * 10]!=0)
        g(x * 10);
    else if (mp2[x * 20]!=0)
        g(x * 20);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        mp.clear();
        mp2.clear();
        cin >> n;
        if (ok(1))
        {
            cout << "YES\n";
            g(1);
        }
        else
            cout << "NO\n";
    }
}