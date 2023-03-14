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
    ll d,sum,k=0;
    cin>>d>>sum;
    ll tot=0,tot2=0;
    vector <pair<ll,ll>> v;
    for(int i=0;i<d;i++)
    {
        ll x,y;
        cin>>x>>y;
        tot+=y;
        tot2+=x;
        v.pb({x,y});
    }
    if(tot<sum || tot2>sum)
    cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(int i=0;i<d;i++)
        {
            ll t=min(v[i].ff+sum-tot2,v[i].ss);
            // cout<<min(t,v[i].ss)<<" ";
            sum-=(t-v[i].ff);
            cout<<sum<<"\n";
        }
    }
}