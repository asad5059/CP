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
    ll n;
    cin>>n;
    if(n==3)
    cout<<1<<" "<<1<<" "<<1;
    else if((n-3)%3!=0 && n!=3)
    {
        cout<<1<<" "<<2<<" "<<n-3;
    }
    else
    {
        ll a=1,b=1,c=n-2;
        while(c%3==0 && b%3==0 && a+b+c==n)
        {
            c--;
            b++;
        }
        cout<<a<<" "<<b<<" "<<c;
    }
    
}
