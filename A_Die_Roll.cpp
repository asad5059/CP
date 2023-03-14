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
    ll a,b;
    cin>>a>>b;
    ll mx=max(a,b);
    ll cnt=0;
    for(int i=1;i<=6;i++)
    {
        if(i>=mx)
        cnt++;
    }
    if(6%cnt==0)
    {
        cout<<1<<"/"<<6/cnt;
    }
    else if(cnt==4)
    {
        cout<<2<<"/"<<3;
    }
    else
    {
        cout<<cnt<<"/"<<6;
    }
    
    
}
