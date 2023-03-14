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
vector<pair<ll, ll>> v;

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.ff == p2.ff && p1.ss < p2.ss;
}
int main()
{
    fastio();
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.pb({x, i});
        mp[x]++;
    }
    if (mp.size() == 1)
    {
        cout << 1;
        return 0;
    }
    sort(v.begin(), v.end());
    ll ans=v[n-1].ff;
    for(int i=0;i<n-1;i++)
    {
        if(ans%v[i].ff)
        {
            cout<<-1;
            return 0;
        }
    }
    ll pos=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i].ff==ans)
        {
            pos=min(pos,v[i].ss);
        }
    }
    cout<<pos;

}