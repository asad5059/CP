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
    ll n,s,q;
    cin>>n;
    if(n==1)
        cout<<"*\n*";
    s=n-1,q=0;
    bool f=0;
    for(int i=0; i<2*n && n!=1; i++)
    {
        for(int j=0; j<s; j++)
            cout<<" ";
        for(int j=0; j<=q; j++)
            cout<<"*";
        cout<<endl;
        if(f==0)
            s--,
            q+=2;
        if(s==0 && f==0)
        {
            f=1;
            s=0;
            for(int j=0; j<=q; j++)
                cout<<"*";
            cout<<endl;
            continue;
        }
        if(f)
        {
            q-=2;
            s++;
        }

    }
}
