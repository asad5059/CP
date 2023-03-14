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
int main()
{
    fastio();
    ll x,n;
    cin>>x>>n;
    ll i=2,q=0,sum=0,pp=0;
    while(i<=n)
    {
        q=i;
        pp=1;
        for(int j=1;j<=q;j++)
        {
            pp*=x;
        }
        sum+=pp;
        i+=2;
    }
    cout<<sum;
}