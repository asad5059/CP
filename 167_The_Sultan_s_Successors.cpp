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
ll a[9][9];
ll vis[9][9],mx=-1e18;
set <ll> st;
bool ok(int i,int j)
{
    for(int l=1;l<9;l++)
    {
        if(vis[i][l]==1)
        return 0;
    }
    for(int l=1;l<9;l++)
    {
        if(vis[l][j]==1)
        return 0;
    }
    ll p=i,q=j;
    while(p>0 && q>0)
    {
        if(vis[p][q]==1)
        return 0;
        p--;
        q--;
    }
    p=i,q=j;
    while(p>0 && q>0 && p<9 && q<9)
    {
        if(vis[p][q]==1)
        return 0;
        p--;
        q++;
    }
    return 1;
}
void f(ll n,ll s)
{
    if(n>=9)
    {
        st.insert(s);
    }
    ll k=0;
    for(int i=1;i<=8;i++)
    {
        if(ok(n,i))
        {
            vis[n][i]=1;
            f(n+1,s+a[n][i]);
            vis[n][i]=0;
        }
    }
}
int main()
{
    // fastio();
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        st.clear();
        memset(vis,-1,sizeof(vis));
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                cin>>a[i][j];
            }
        }
        f(1,0);
        printf("%5lld\n",*st.rbegin());
    }
}