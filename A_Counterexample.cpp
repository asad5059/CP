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
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}
int main()
{
    fastio();
    ll a,b;
    cin>>a>>b;
    ll x,y,z,f=0;
    for(ll i=a;i<=b;i++)
    {
        if(f==1)
        break;
        ll p=i;
        for(ll j=i+1;j<=b;j++)
        {
            if(f==1)
            break;
            if(gcd(p,j)==1)
            {
                x=p;
                y=j;
                for(ll k=j+1;k<=b;k++)
                {
                    if(gcd(y,k)==1 && gcd(x,k)!=1)
                    {
                        z=k;
                        f=1;
                        break;
                    }
                }
            }
        }
    }
    if(f==0) cout<<-1; else cout<<x<<" "<<y<<" "<<z;
}
