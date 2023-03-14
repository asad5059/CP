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
bool cmp(pair<ll,ll> p1,pair<ll,ll> p2)
{
    ll m1=0,m2=0;
    m1=min(2*p1.ff,p1.ss)-min(p1.ff,p1.ss);
    m2=min(2*p2.ff,p2.ss)-min(p2.ff,p2.ss);
    if(m1>m2)
    return 1;
    else
    return 0;
}
int main()
{
    fastio();
    ll n,x;
    cin>>n>>x;
    vector <pair<ll,ll>> v;
    ll p,q;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        v.pb({p,q});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<x;i++)
    {
        v[i].ff*=2;
    }
    ll sum=0;
    for(auto i:v)
    {
        sum+=min(i.ff,i.ss);
    }
    cout<<sum;
    
}