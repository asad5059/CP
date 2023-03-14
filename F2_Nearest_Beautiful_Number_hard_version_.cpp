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
set <ll> ans;
vector <ll> v[11];
void f(ll d)
{
    // cout<<d<<"\n";
    ans.insert(d);
    if(d>1e9)
    {
        return;
    }
    d*=10;
    for(int i=0;i<=9;i++)
    {
        if(i==0 && d==0)
        {
            continue;
        }
        else
            f(d+i);
    }
}
ll ok(ll n)
{
    set <ll> s;
    while(n)
    {
        s.insert(n%10);
        n/=10;
    }
    return s.size();
}
int main()
{
    fastio();
    f(0);
    ll t;
    cin>>t;
    for(auto i:ans)
    {
        ll q=ok(i);
        v[q].pb(i);
    }
    // while(t--)
    // {
    //     ll n,d;
    //     cin>>n>>d;
    //     ll ans=1e18;
    //     for(int i=0;i<=d;i++)
    //     {
    //         auto j=lower_bound(v[i].begin(),v[i].end(),n);
    //         ans=min(ans,*j);
    //     }
    //     cout<<ans<<"\n";
    // }
}