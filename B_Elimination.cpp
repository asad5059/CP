#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,s;
        cin>>a>>b>>c>>d;
        s=max(a+b,c+d);
        cout<<s<<endl;
    }
}