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
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,p=1,q=1,ans=0,tmp=0;
        cin>>n>>m>>k;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                tmp=i+j+k;
                ans^=tmp;
            }
            
        }
        cout<<ans<<"\n";
    }
}