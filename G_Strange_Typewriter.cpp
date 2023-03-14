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
    for(int tc=1;tc=t;tc++)
    {
        ll keys;
        string s,k,dis="";
        cin>>keys;
        map <string,int> mp;
        for(int i=0;i<keys;i++)
        {
            cin>>s;
            mp[s]++;
        }
        cin>>s;
        ll cnt=0;
        for(int i=0;i<s.size();i++)
        {
            
        }
    }
}