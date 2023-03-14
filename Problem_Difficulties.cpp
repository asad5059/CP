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
    ll t;
    cin>>t;
    while(t--)
    {
        map <ll,ll> mp;
        for(int i=0;i<4;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        ll c1=0,c2=0;
        for(auto i:mp)
        {
            if(i.ss>1)
            c1++, c2++;
            else
            (c1<c2?c1++:c2++);
        }
        ll ans=0;
        if(c1>=2) ans++;
        if(c2>=2) ans++;
        cout<<ans<<"\n";
    }
}