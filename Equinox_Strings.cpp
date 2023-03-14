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
    string s="EQUINOX";
    while(t--)
    {
        ll n,a,b,sar=0,anu=0;
        cin>>n>>a>>b;
        while(n--)
        {
            string st;
            cin>>st;
            bool f=0;
            for(int i=0;i<s.size();i++)
            {
                if(st[0]==s[i])
                {
                    f=1;
                    break;
                }
            }
            if(f)
            sar+=a;
            else 
            anu+=b;
        }
        if(sar==anu)
        cout<<"DRAW\n";
        else if(sar>anu)
        cout<<"SARTHAK\n";
        else cout<<"ANURADHA\n";
    }
}