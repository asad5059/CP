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
    ll node,edge;
    cin>>node>>edge;
    vector <ll> list[node+1];
    while (edge--)
    {
        ll x,y;
        cin>>x>>y;
        list[x].pb(y);
        list[y].pb(x);
    }
    for(int i=1;i<=node;i++)
    {
        cout<<i<<" : ";
        for(auto it:list[i])
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    
}