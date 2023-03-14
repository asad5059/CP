//ID : C191008
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
ll n;
int a[10000][10000];
bool ok(int i,int j)
{
    for(int l=0;l<n;l++)
    {
        if(a[i][l]==1)
        return 0;
    }
    for(int l=0;l<n;l++)
    {
        if(a[l][j]==1)
        return 0;
    }
    ll p=i,q=j;
    while(p>=0 && q>=0)
    {
        if(a[p][q]==1)
        return 0;
        p--;
        q--;
    }
    p=i,q=j;
    while(p>=0 && q>=0 && p<n && q<n)
    {
        if(a[p][q]==1)
        return 0;
        p--;
        q++;
    }
    return 1;
}
void f(int x)
{
    if(x>=n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(ok(x,i))
        {
            a[x][i]=1;
            f(x+1);
            a[x][i]=0;
        }
    }
    return;

}
int main()
{
    fastio();
    cin>>n;
    memset(a,0,sizeof(a));
    f(0);
}