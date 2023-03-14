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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        priority_queue<pair<ll, pair<ll, ll>>> q;
        set<pair<ll, ll>> st;
        ll n;
        cin >> n;
        ll ans[n + 1];
        memset(ans, -1, sizeof(ans));
        int i = 1;
        q.push({n,{-1,-n}});
        for(int j=1;j<=n;j++)
        {
            pair<ll,pair<ll,ll>> p=q.top();
            q.pop();
            ll l,r,m;
            p.ss.ff=-p.ss.ff;
            p.ss.ss=-p.ss.ss;
            m=(p.ss.ff+p.ss.ss)/2;
            ans[m]=j;
            q.push({m-p.ss.ff,{-p.ss.ff,-m+1}});
            q.push({p.ss.ss-m,{-m-1,-p.ss.ss}});

        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}