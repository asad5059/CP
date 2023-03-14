//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
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
ll n,k;
ll dp[10000];
ll dr[10000];
ll f(int n,int k)
{
    if(dp[n]!=-1) return dp[n];
    if(n>=k)
    {
        if(n==k) return 1;
        else return 0;
    }
    ll a=0,b=0,c=0;
    a=f(n+1,k);
    b=f(n+2,k);
    c=f(n+3,k);
    if(a==1)
    dr[n]=1;
    if(b==1)
    dr[n]=2;
    if(c==1)
    dr[n]=3;
    return dp[n]=a+b+c;
}
void g(int n,int k)
{
    cout<<n<<" ";
    if(n>=k)
    {
        cout<<endl;
        return;
    }
    if(dr[n]==1)
    g(n+1,k);
    if(dr[n]==2)
    g(n+2,k);
    if(dr[n]==3)
    g(n+3,k);

}
int main()
{
    fastio();
    memset(dp,-1,sizeof(dp));
    memset(dr,-1,sizeof(dr));
    cin>>n>>k;
    cout<<f(n,k)<<endl;
    g(n,k);
}