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
        if(n==2)
        cout<<-1<<endl;
        else
        {
            bool f=0;
            ll k=1;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<k<<" ";
                    k+=2;
                    if(k>n*n)
                    {
                        k=2;
                    }
                }
                cout<<endl;
            }
        }
    }
}