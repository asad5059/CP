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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map <char,ll> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        if(mp['D']==0)
        {
            cout<<"N\n";
            continue;
        }
        else if(mp['B']==1 && n%2!=0)
        {
            cout<<"N\n";
            continue;
        }
        
    }
    
}