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
    ll n,s,d;
    cin>>n>>s>>d;
    ll x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<s && y>d)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}