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
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll n;
vector<ll> a, b;
struct s1
{
    ll l, r, d;
};
vector<s1> ans;
bool ok(vector<ll> v)
{
    return v == b;
}
void f(int l, int r, ll x)
{
    ll cnt = 0, pos = 0;
    for (int i = l; i <= r; i++)
    {
        if (x == a[i])
        {
            pos = i;
            cnt++;
            break;
        }
    }
    if (cnt == 0)
        return;
    rotate(a.begin() + l, a.begin() + cnt, a.begin() + r);
    s1 tmp;
    tmp.d = cnt;
    tmp.l = l + 1;
    tmp.r = r + 1;
    ans.push_back(tmp);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        a.clear();
        b.clear();
        a = vector<ll>(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        b = a;
        sort(b.begin(), b.end());
        int j = 0;
        while(1)
        {
            ll cur=b[j],pos;
            bool fl=1;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    fl=0;
                    break;
                }
            }
            if(fl) break;
            for(int i=j;i<n;i++)
            {
                if(a[i]==b[j]) {
                    pos=i; break;
                }
            }
            auto k=a.begin()+pos;
            ll d=(j-pos);
            rotate(a.begin()+j,k,a.end());
            d=abs(d);
            if(d>0)
            ans.push_back({j+1,n,d});
            // for(auto p:a) cout<<p<<" ";
            // cout<<"\n";
            j++;
        }
        cout << ans.size() << '\n';
        for (auto i : ans)
        {
            cout << i.l << " " << i.r << " " << i.d << "\n";
        }
        ans.clear();
    }
}