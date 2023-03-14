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
    ll n,m;
    cin>>n>>m;
    set <ll> v[n+1];
    for(int i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        v[x].insert(y);
        v[y].insert(x);
    }
    // for(int i=1;i<=n;i++)
    // {
    //     if(v[i].size()>0)
    //     v2.pb(v[i].size());
    // }
    // sort(v2.begin(),v2.end());
    ll cnt=0,c=0,f=1,car=0;
    while(1)
    {
        set <ll> s;
        f=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()==1)
            {
                s.insert(i);
                f=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(auto j:s)
            {
                if(v[i].find(j)!=v[i].end())
                v[i].erase(j);
            }
        }
        for(auto j:s)
        {
            v[j].clear();
        }
        s.clear();
        if(f)
        cnt++;
        if(!f)
        break;
    }
    cout<<cnt;
}