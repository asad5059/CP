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
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
ll n, l, r, x,p=0;
vector <ll> v1[40000],v2;
vector<ll> v;
void f(vector<ll> x,int i)
{
    if(i==n)
    {
        v1[p]=x;
        p++;
        return;
    }
    vector<ll> y=x;
    f(x,i+1);
    y.pb(v[i]);
    f(y,i+1);
    return;
}
int main()
{
    fastio();
    cin >> n >> l >> r >> x;
    ll q;
    v=vector<ll>(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0, cnt = 0;
    sort(v.begin(), v.end());
    f(v2,0);
    for(int i=0;i<=p;i++)
    {
        ll sum=0,mi=-1,mx=-1;
        if(v1[i].size()>0)
        for(auto j: v1[i])
        {
            if(mi==-1)
            mi=j;
            mx=j;
            sum+=j;
        }
        if(mx-mi>=x && sum>=l && sum<=r)
        ans++;
    }
    cout<<ans;
}