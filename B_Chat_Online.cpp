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
int v[100000];
int main()
{
    fastio();
    ll p, q, l, r,cnt=0;
    cin >> p >> q >> l >> r;
    vector <pair<ll,ll>> vp;
    for (int i = 0; i < p; i++)
    {
        ll x, y;
        cin >> x >> y;
        for(int j=x;j<=y;j++)
        v[j]=1;
    }
    for (int i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.pb({x,y});
    }
    for(int i=l;i<=r;i++)
    {
        bool f=0;
        for(int j=0;j<vp.size();j++)
        {
            ll x=vp[j].ff+i;
            ll y=vp[j].ss+i;
            for(int k=x;k<=y;k++)
            {
                if(v[k]==1)
                {
                    cnt++;
                    f=1;
                    break;
                }
            }
            if(f)
            break;
        }
    }
    cout<<cnt;
}