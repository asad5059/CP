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
    cin>>t;
    while(t--)
    {
        ll n,m,x;
        cin>>n>>m>>x;
        ll arr[n];
        map <ll,ll> mp;
        vector <ll> v[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        reverse(mp.begin(),mp.end());
        for(auto i:mp)
        cout<<i.ff<<" "<<i.ss<<endl;
    }
}