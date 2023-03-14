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
        ll n;
        cin>>n;
        vector <ll> a(n),b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b.pb(a[i]);
        }
        sort(b.begin(),b.end());
        if(a==b) cout<<0<<"\n";
        else if(a[n-1]==n || a[0]==1) cout<<1<<"\n";
        else if(a[0]==n && a[n-1]==1) cout<<3<<"\n";
        else cout<<2<<'\n';
    }
}
