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
ll n, r, avg, cnt = 0;
bool cmp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if(p1.ss==r && p2.ss<r)
    return 0;
    if(p1.ss<r && p2.ss==r)
    return 1;
    if(p1.ss<r && p2.ss<r)
    {
        if(p1.ff<p2.ff)
        return 1;
        else
        return 0;
    }
}
int main()
{
    fastio();
    cin >> n >> r >> avg;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb({y, x});
        cnt += x;
    }
    if (cnt / n >= avg)
    {
        cout << 0;
        return 0;
    }
    else
    {
        ll req = (avg * n) - cnt;
        sort(v.begin(), v.end(), cmp);
        ll c=0,i=0;
        // cout<<req;
        for(int i=0;i<n;i++)
        {
            if(req<=0) break;
            ll x=min(req,r-v[i].ss);
            c+=x*v[i].ff;
            req-=x;
        }
        cout<<c;
    }
}