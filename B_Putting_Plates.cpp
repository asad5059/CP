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
        ll n, m;
        cin >> n >> m;
        ll k = 0;
        ll a[100][100];
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++)
        {
            ll x = 1;
            for (int j = 1; j <= m; j++)
            {

                if((j==1 || j==m || i==n || i==1)&& a[i-1][j]==0 && a[i+1][j]==0 && a[i][j-1]==0 && a[i][j+1]==0 && a[i-1][j-1]==0 && a[i-1][j+1]==0 && a[i+1][j-1]==0 && a[i+1][j+1]==0)
                {
                    a[i][j]=1;
                }
                else
                a[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}