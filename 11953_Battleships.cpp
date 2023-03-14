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
    for(int i=1;i<=t;i++)
    {
        ll x;
        cin>>x;
        char a[x][x];
        ll cnt=0;
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<x;k++)
            {
                cin>>a[j][k];
                if(a[j][k]=='x') cnt++;
            }
        }
        cout<<"Case "<<i<<": "<<cnt<<"\n";
    }
}