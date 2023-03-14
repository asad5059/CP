#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(auto &x:v)
    {
        cin>>x;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<v[i]-v[i-1]<<" ";
    }

}