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
        string s;
        cin>>s;
        ll g=0,b=0,tot=0;
        bool f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') b++;
            else if(s[i]=='1') g++;
            tot++;
            if(((g*100)/tot)>=50)
            {
                f=1;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}