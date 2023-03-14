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
    vector <pair<ll,string>> v;
    ll n;
    cin>>n;
    string s;
    ll h;
    while(n--)
    {
        cin>>s>>h;
        v.push_back({h,s});
    }
    sort(v.begin(),v.end());
    n=v.size()-2;
    cout<<v[n].ss;
}