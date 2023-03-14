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
int side[6+1];
int main()
{
    fastio();
    ll n;
    cin>>n;
    ll top;
    cin>>top;
    ll bottom=7-top;
    ll x,y;
    vector <ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        memset(side,0,sizeof(side));
        side[x]=1;
        side[y]=1;
        side[7-x]=1;
        side[7-y]=1;
        if(x==bottom || y==bottom)
        {
            cout<<"NO";
            return 0;
        }
        for(int i=1;i<7;i++)
        {
            if(side[i]==0 )
            v.push_back(i);
        }
        if(v[0]!=bottom && v[1]!=bottom)
        {
            cout<<"NO";
            return 0;
        }
        v.clear();
    }
    cout<<"YES";
}
