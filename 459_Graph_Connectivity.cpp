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
vector <ll> adj[30];
bool vis[30];
void dfs(ll m)
{
    vis[m]=1;
    for(int i=0;i<adj[m].size();i++)
    {
        if(vis[adj[m][i]]==0)
        {
            dfs(adj[m][i]);
        }
    }
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        cout.flush();
        char c;
        cin>>c;
        ll node=c-'A'+1,x,y;
        cin.ignore();
        string s;
        while (getline(cin, s) && s != "")
        {
            x=s[0]-'A'+1;
            y=s[1]-'A'+1;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        ll cnt=0;
        for(int i=1;i<=node;i++)
        {
            if(vis[i]==0)
            {
                //cout<<i<<endl;
                dfs(i);
                cnt++;
            }
        }
        //cout<<endl<<endl;
        cout<<cnt<<endl;
        if(t) cout<<endl;
        for(int i=0;i<=50;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
    }
}