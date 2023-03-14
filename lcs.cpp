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
string s, w;
ll n, m;
ll dp[1000][1000];
ll dr[1000][1000];

ll f(int i, int j)
{
    if(dp[i][j]!=-1)
    return dp[i][j];
    if (i == n || j == m)
        return 0;
    ll a = -1e18, b = -1e18, c = -1e18;
    if (s[i] == w[j])
    {
        a = 1 + f(i + 1, j + 1);
        dr[i][j] = 1;
    }
    else
    {
        b = f(i + 1, j);
        c = f(i, j + 1);
        if (b > c)
            dr[i][j] = 2;
        else
            dr[i][j] = 3;
    }
    return dp[i][j]=max(a, max(b, c));
}
void g(int i,int j)
{
    if(s[i]==w[j])
    cout<<s[i];
    if(i==n || j==m)
    return;
    if(dr[i][j]==1)
    g(i+1,j+1);
    else  if(dr[i][j]==2)
    g(i+1,j);
    else
    g(i,j+1);
}
int main()
{
    fastio();
    memset(dp, -1, sizeof(dp));
    memset(dr, -1, sizeof(dr));

    cin >> s >> w;
    n = s.size();
    m = w.size();
    if(n<m)
    swap(s,w);
    cout << f(0, 0)<<endl;
    g(0,0);
}