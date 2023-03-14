#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll n,m;
ll a[11][11];
ll f(ll i,ll j,ll cs)
{
    if(i==n-1 && j==m-1)
    {
        return cs;

    }
    ll pp=-INT_MAX,qq=-INT_MAX;
    if(i+1<n)
    pp=f(i+1,j,cs+a[i+1][j]);
    if(j+1<m)
    qq=f(i,j+1,cs+a[i][j+1]);
    return max(pp,qq);
}
int main()
{
    fastio();
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(0,0,a[0][0]);

}