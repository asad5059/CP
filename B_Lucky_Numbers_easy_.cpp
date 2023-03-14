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
vector <ll> v;
bool ok(ll n)
{
    map <int,int> mp;
    while(n)
    {
        mp[n%10]++;
        n/=10;
    }
    return mp[4]==mp[7];
}
void f(ll d)
{
    if(ok(d))
    v.pb(d);
    if(d>1e9)
    return;
    d*=10;
    f(d+4);
    f(d+7);
}
int main()
{
    fastio();
    f(0);
    sort(v.begin(),v.end());
    ll n;
    cin>>n;
    auto i=lower_bound(v.begin(),v.end(),n);
    cout<<*i;
}