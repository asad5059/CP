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
    ll n,cnt=0;
    cin>>n;
    ll a[n],b[n+1],j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) cnt++, b[j++]=i;
    }
    ll ans=1;
    if(cnt==1) cout<<1;
    else if(cnt==0) cout<<0;
    else
    {
        for(int i=1;i<j;i++)
        {
            ans*=b[i]-b[i-1];
        }
        cout<<ans;
    }

}