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
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        cout<<0<<'\n';
        else
        {
            cout<<min(min(a-p%a,b-p%b),c-p%c)<<"\n";
        }
    }
}