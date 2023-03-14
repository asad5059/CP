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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    ll n,x,y;
    cin>>n;
    map<ll,ll> mp1,mp2;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        mp1[x+y]++;
        mp2[x-y]++;
    }
    ll ans=0;
    for(auto i:mp1)
    {
        if(i.ss>1)
        {
            x=i.ss-1;
            ans+=x*(x+1)/2;
        }
    }
    for(auto i:mp2)
    {
        if(i.ss>1)
        {
            x=i.ss-1;
            ans+=x*(x+1)/2;
        }
    }
    cout<<ans;
}