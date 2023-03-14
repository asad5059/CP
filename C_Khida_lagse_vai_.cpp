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
    ll x,a,b;
    cin>>x>>a>>b;
    ll d1,d2;
    d1=abs(x-a);
    d2=abs(x-b);
    if(d1>d2) cout<<"B";
    else cout<<"A";
}
