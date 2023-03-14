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
    ll t,c=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a,b,c,x;
        cin>>a>>b>>c>>x;
        x=1/x;
        x=sqrt(1+x);
        b=a/x;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(7)<<b<<endl;
        c++;
    }
}