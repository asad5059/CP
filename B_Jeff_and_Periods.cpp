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
    map<ll,vector<ll>> mp;
    vector <ll> v(n);
    vector <pair<ll,ll>> vp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]].pb(i+1);
    }
    for(auto i:mp)
    {
        bool f=1;
        ll dif=0;
        if(i.ss.size()>1)
        dif=i.ss[1]-i.ss[0];
        for(int j=2;j<i.ss.size();j++)
        {
            if(i.ss[j]-i.ss[j-1]!=dif)
            {
                f=0;
            }
        }
        if(f)
        vp.pb({i.ff,dif});
    }
    cout<<vp.size()<<"\n";
    for(auto i:vp)
    cout<<i.ff<<" "<<i.ss<<"\n";

}