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
    ll t,i=1;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<"Case "<<i<<": "<<x+y<<"\n";
        i++;
    }
}