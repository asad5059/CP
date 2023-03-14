#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
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
int main()
{
    fastio();
    ll n,p=0,ne=0,ans=0;
    cin>>n;
    ll a[n];
    ll b[n],c[n];
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0) ans++;
        if(i==0)
        {
            if(a[i]>=0) b[i]++;
            else c[i]++;
        }
        else if(a[i]>=0)
        {
            b[i]=b[i-1]+1;
            c[i]=c[i-1];
        }
        else
        {
            c[i]=c[i-1]+1;
            b[i]=b[i-1];
        }
    }
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" "<<c[i]<<"\n";
        if(b[i]%2) cnt++;
    }
    cnt=cnt*(cnt-1)/2;
    ans+=cnt;
    cout<<cnt;
}