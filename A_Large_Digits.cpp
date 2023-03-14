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
    string a,b;
    cin>>a>>b;
    ll x=0,y=0;
    for(int i=0;i<a.size();i++)
    {
        x+=a[i]-'0';
    }
    for(int i=0;i<b.size();i++)
    {
        y+=b[i]-'0';
    }
    cout<<max(x,y);
}
