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
        ll n,m,x,r,cnt=1;
        cin>>n>>m>>x;
        x%n==0?r=n:r=x%n;
        ll ans=(r-1)*m+ceil(x/(double)n);
        cout<<ans<<endl;
    }
}