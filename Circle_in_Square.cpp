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
const double pi=2.0*acos(0.0);
int main()
{
    fastio();
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r;
        cin>>r;
        double areaSq=2*r*2*r;
        double areaCir=pi*(r*r);
        double ans=abs(areaSq-areaCir);
        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<< ans<<endl;
    }
}