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
    ll n, m;
    while (cin >> n >> m)
    {
        if(n<m)
        {
            cout<<0;
            continue;
        }
        ll up[101], down[101];
        memset(up, 0, sizeof(up));
        memset(down, 0, sizeof(down));
        for (int i = 1; i <= n; i++)
            up[i]++;
        for (int j = 1; j <= n - m; j++)
            down[j]++;
        for(int j=1;j<=m;j++) down[j]++;
        for (int i = 1; i <= n; i++)
        {
            if (down[i] > 0 && up[i]>0)
            {
                up[i]--;
                down[i]--;
            }
        }
        double ans=1;
        for(int i=1;i<=n;i++)
        {
            if(up[i]==0 && down[i]==0)
            {
                continue;
            }
            else if(up[i]>0 && down[i]==0)
            {
                ans*=i;
            }
            else if(up[i]==0 && down[i]>0)
            {
                ans/=i;
            }
            else
            {
                continue;
            }
        }
        printf("%.0lf", ans);
    }
}