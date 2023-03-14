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
bool f[10000000];
int main()
{
    fastio();
    int arr[10000000];
    for(ll i=2;i*i<=10000000;i++)
    {
        if(f[i]==0)
        {
            for(ll j=i*i;j<=10000000;j+=i)
            {
                f[j]=1;
            }
        }
    }
    for(int i=1;i<=3163;i++)
    {
        for(int j=1;j<=57;j++)
        {
            ll x,y;
            x=pow(x,2);
            y=pow(y,4);
            if(f[x+y]==0 && x+y<=10000000)
            arr[x+y]=1;
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>q;
        // ll l=sqrt(sqrt(q)), r=sqrt(q);
        cout<<q<<endl;
    }
}
