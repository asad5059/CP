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
    ll n,q;
    cin>>n>>q;
    ll x,y;
    vector <ll> v(n);
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        x--;
        y--;
        for(int j=x;j<=y;j++)
        {
            v[j]++;
        }
    }
    for(auto it:v)
    cout<<it<<" ";
}


