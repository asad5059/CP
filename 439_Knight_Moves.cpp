#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
bool vis[8][8];
int dis[8][8],p1,p2,q1,q2;
int d1[]={-2,-1,1,2,2,1,-1,-2};
int d2[]={1,2,2,1,-1,-2,-2,-1};
bool ok(int i,int j)
{
    return i>=0 && i<8 && j>=0 && j<8 && vis[i][j]==0;
}
void bfs(int i,int j)
{
    vis[i][j]=1;
    dis[i][j]=0;
    queue <pair<int,int>> q;
    q.push({i,j});
    while(!q.empty())
    {
        pair<int,int> p;
        p=q.front();
        q.pop();
        for(int k=0;k<8;k++)
        {
            int x,y;
            x=p.ff+d1[k];
            y=p.ss+d2[k];
            if(ok(x,y))
            {
                vis[x][y]=1;
                dis[x][y]=dis[p.ff][p.ss]+1;
                q.push({x,y});
            }
        }
    }
}
int main()
{
    fastio();
    string s1,s2;
    while(cin>>s1>>s2)
    {
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        p1=s1[1]-'0'-1;
        p2=s1[0]-'a';
        q1=s2[1]-'0'-1;
        q2=s2[0]-'a';
        bfs(p1,p2);
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dis[q1][q2]<<" knight moves.\n";
        // cout<<s1<<" "<<s2<<" "<<q1<<" "<<q2<<endl;
        // for(int i=0;i<8;i++)
        // {
        //     for(int j=0;j<8;j++)
        //     {
        //         cout<<dis[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    }
}