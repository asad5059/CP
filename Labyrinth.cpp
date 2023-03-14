#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
#define pii pair<ll,ll>
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
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
  //#ifndef ONLINE_JUDGE
  //freopen("input.txt", "r+", stdin);
  //freopen("output.txt", "w+", stdout);
  //#endif
}
char a[1001][1001];
ll n, m;
pii st,en;
int d1[]={0,0,1,-1};
int d2[]={1,-1,0,0};
bool vis[1001][1001];
ll dp[1001][1001];
bool ok(int i,int j)
{
  return i>=1 && j>=1 && j<=m && i<=n && vis[i][j]==0 && (a[i][j]=='.' || a[i][j]=='B');
}
ll f(int i,int j)
{
  vis[i][j]=1;
  if(dp[i][j]!=-1) return dp[i][j];
  if(a[i][j]=='B')
  {
    return 0;
  }
  bool c=0;
  ll ans=1e18;
  for(int k=0;k<4;k++)
  {
    ll x=i+d1[k], y=j+d2[k];
    if(ok(x,y))
    {
      c=1;
      ans=min(1+f(x,y),ans);
    }
  }
  return dp[i][j] = ans;
}
int main()
{
  fastio();
  cin>>n>>m;
  memset(dp,-1,sizeof(dp));
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      cin>>a[i][j];
      if(a[i][j]=='A') st={i,j};
      if(a[i][j]=='B') en={i,j};
    }
  }
  ll ans=f(st.ff,st.ss);
  if(ans==1e18)
  {
    cout<<"NO"
  }
  cout<<ans;
}