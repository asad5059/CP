#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,m,k;
bool fun(int i,int j,ll cost)
{
    if(i==n && j==m)
    {
        if(cost==k)
        return 1;
        else return 0;
    }
    bool flg=0,fl1=0;
    if(i>=1 && i<=n && j>=1 && j+1<=m)
    {
        flg=fun(i,j+1,cost+i);
    }
    else if(i>=1 && i+1<=n && j>=1 && j<=m)
    {
        fl1=fun(i+1,j,cost+j);
    }
    return flg||fl1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(fun(1,1,0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}