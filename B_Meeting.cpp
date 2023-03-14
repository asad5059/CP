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
struct s1
{
    ll x, y, r;
};
vector<s1> v1(100000);
vector<pair<ll, ll>> vec;
bool ok(ll x1,ll y1,ll x2,ll y2,ll r)
{
    ll dis=ceil(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    return dis<=r;
}
void gen(ll x1, ll y1, ll x2, ll y2)
{
    if (x2 < x1)
    {
        swap(x1, x2);
        swap(y1, y2);
    }
    ll i;
    ll x3 = x1;
    ll y3 = y2;
    ll x4 = x2;
    ll y4 = y1;
    for (i = min(y1, y3); i <= max(y1, y3); i++)
    {
        vec.pb({x1, i});
    }
    for (i = min(y4, y2); i <= max(y4, y2); i++)
    {
        vec.pb({x2, i});
    }
    for (i = x1 + 1; i < x4; i++)
    {
        vec.pb({i, y1});
    }
    for (i = x3 + 1; i < x2; i++)
    {
        vec.pb({i, y3});
    }
}
int main()
{
    fastio();
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i].x >> v1[i].y >> v1[i].r;
    }
    gen(x1, y1, x2, y2);
    ll cnt=0;
    for(auto i:vec)
    {
        bool f=0;
        for(int j=0;j<n;j++)
        {
            if(ok(v1[j].x,v1[j].y,i.ff,i.ss,v1[j].r))
            {
                f=1;
                break;
            }
        }
        if(!f) cnt++;
    }
    cout<<cnt;
}