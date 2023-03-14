#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;

ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }
inline ll modDiv(ll a, ll b)
{
    a = MOD(a);
    b = modInv(b);
    return (a * b) % mod;
}
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
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    //#endif
}
const ll mx = 1e6;
bool f[mx];
int main()
{
    fastio();
    vector<ll> s;
    for (int i = 2; i * i <= mx; i++)
    {
        if (f[i] == 0)
        {
            for (int j = i * i; j <= mx; j += i)
            {
                f[j] = 1;
            }
        }
    }
    for (int i = 2; i < mx; i++)
        if (f[i] == 0)
            s.pb(i);
    ll n, m;
    cin >> n >> m;
    ll a[n + 1][m + 1], b[n + 1][m + 1], ans = -1,c[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        bool f = 1;
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (binary_search(s.begin(), s.end(), a[i][j]) == 0)
            {
                f = 0;
                b[i][j] = 0;
            }
            else
                b[i][j] = 1;
        }
    }
    if(n==1 && m==1)
    {
        int k=lower_bound(s.begin(),s.end(),a[1][1])-s.begin();
        if(a[1][1]!=1)
        cout<<min(abs(a[1][1]-s[k]),abs(a[1][1]-s[k+1]));
        else
        cout<<1;
        return 0;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(b[i][j]==0)
                {
                    int k=lower_bound(s.begin(),s.end(),a[i][j])-s.begin();
                    ll d1=INT_MAX,d2=INT_MAX;
                    if(k<s.size())
                    {
                        d1=abs(a[i][j]-s[k+1]);
                    }
                    if(k>0)
                    d2=abs(a[i][j]-s[k]);
                    if(a[i][j]==1)
                    d1=1,d2=1;
                    c[i][j]=min(d1,d2);
                    
                }
                else c[i][j]=0;
            }
        }
        ll ans=1e18;
        for(int i=1;i<=n;i++)
        {
            ll tot=0;
            for(int j=1;j<=m;j++)
            {
                tot+=c[i][j];
                // cout<<b[i][j]<<" ";
            }
            // cout<<'\n';
            ans=min(ans,tot);
        }
        for(int i=1;i<=m;i++)
        {
            ll tot=0;
            for(int j=1;j<=n;j++)
            {
                tot+=c[j][i];
            }
            ans=min(ans,tot);
        }
        cout<<ans;
    }
}