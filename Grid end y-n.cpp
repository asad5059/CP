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
char a[100][100];
int dp[100][100];
bool f(int e1,int e2,int i,int j)
{
    if(a[i][j]=='#')
    return 1;
    if(dp[i][j]!=-1)
    return dp[i][j];
    bool f1=0,f2=0;
    if(i+1<=e1 && j>=0 && j<=e2 && a[i+1][j]!='*')
    f1=f(e1,e2,i+1,j);
    if(i<=e1 && j>=0 && j+1<=e2 && a[i][j+1]!='*')
    f2=f(e1,e2,i,j+1);
    return dp[i][j]=f1||f2;
}
int main()
{
    fastio();
    int i=0;
    string s;
    while (cin>>s)
    {
        for(int j=0;j<s.size();j++)
        {
            a[i][j]=s[j];
        }
        i++;
    }
    memset(dp,-1,sizeof(dp));
    cout<<(f(i-1,s.size()-1,0,0)?"YES\n":"NO\n");
    
}