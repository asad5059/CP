#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
vector <int> prime;
vector <int> adj[10000];
bool vis[10000];
int dis[10000];

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void generatePrime()
{
    for (int i = 1000; i <= 9999; i++)
    {
        if (isPrime(i))
        {
            prime.pb(i);
        }
    }
}
bool ok(int x,int y)
{
    int cnt=0;
    while(x>0)
    {
        if(x%10 != y%10)
        cnt++;
        x/=10;
        y/=10;
    }
    return cnt==1;
}
void graph()
{
    for(int i=0;i<prime.size();i++)
    {
        for(int j=i+1;j<prime.size();j++)
        {
            int x=prime[i];
            int y=prime[j];
            if(x!=y && ok(x,y))
            {
                adj[x].pb(y);
                adj[y].pb(x);
            }
        }
    }
}
void bfs(int u)
{
    vis[u]=1;
    dis[u]=0;
    queue <int> q;
    q.push(u);
    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        for(auto i:adj[c])
        {
            if(vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
                dis[i]=dis[c]+1;
            }
        }
    }
}
int main()
{
    fastio();
    generatePrime();
    graph();
    ll t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10000;i++)
        {
            vis[i]=0;
            dis[i]=-1;
        }
        ll x,y;
        cin>>x>>y;
        bfs(x);
        if(dis[y]==-1)
        cout<<"Impossible"<<endl;
        else cout<<dis[y]<<endl;
    }
}