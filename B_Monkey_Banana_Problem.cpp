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
int a[202][202];
ll dp[202][202];
ll n;
ll f(int r,int c,int i,int j)
{
    ll x=-1e18,y=-1e18,z=-1e18;
    // cout<<i<<" "<<j<<endl;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==r && j==c)
    return a[i][j];
    if(i+1<=r && j-1<=c && i+1>0 && j-1>0 && a[i+1][j-1]!=0 && i<n)
    x=a[i][j]+f(r,c,i+1,j-1);   //corner

    if(i>=n && i+1<=r && j+1<=r && a[i+1][j+1]!=0)
    z=a[i][j]+f(r,c,i+1,j+1);
    if(i+1<=r && j<=c && i+1>0 && a[i+1][j]!=0)
    y=a[i][j]+f(r,c,i+1,j);
    return dp[i][j]=max(x,max(y,z));

}

/*      0 0 0 7 
        0 0 6 4 
        0 2 5 10 
        9 8 12 2 
        0 2 12 7 
        0 0 8 2 
        0 0 0 10    */ 
int main()
{
    fastio();
    ll t;
    cin >> t;
    for(int tc=1;tc<=t;tc++)
    {
        ll sp;
        cin >> n;
        sp = n;
        bool fx = 0;
        memset(a, 0, sizeof(a));
        memset(dp, -1, sizeof(dp));
        for (int i = 1; i <2*n; i++)
        {
            if (!fx)
                sp--;
            if (sp == -1)
                fx = 1, sp = 0;
            if(fx)
                sp++;
            ll cnt = 0;
            for (int j = 1; j <= n; j++, cnt++)
            {
                if (cnt >= sp)
                    cin >> a[i][j];
            }
        }
        cout<<"Case "<<tc<<": "<<f((2*n-1),n,1,n)<<endl;
    }
}