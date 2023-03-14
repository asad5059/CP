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
    ll n;
    cin>>n;
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({y,x});
    }
    sort(v.rbegin(),v.rend());
    ll ans=v[0].ss,tot=v[0].ff;
    // for(auto i:v)
    // cout<<i.ff<<" "<<i.ss<<"\n";
    for(int i=1;i<n;i++)
    {
        if(tot==0)
        break;
        tot--;
        ans+=v[i].ss;
        tot+=v[i].ff;
    }
    cout<<ans;
}