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
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
const ll mod = 1e9+7;

ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
inline ll modDiv(ll a,ll b){ a=MOD(a); b=modInv(b); return (a*b)%mod; }
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
struct s1
{
    ll l,r,d;
};
ll q[1000000],inc[1000000];
int main()
{
    fastio();
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n+10);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<s1> op(m+1);
    for(int i=1;i<=m;i++){
        cin>>op[i].l>>op[i].r>>op[i].d;
    }
    for(int i=1;i<=k;i++){
        ll x,y;
        cin>>x>>y;
        q[x]++;
        q[y+1]--;
    }
    for(int i=1;i<=m;i++)
    {
        q[i]+=q[i-1];
    }
    for(int i=1;i<=m;i++)
    {
        op[i].d*=q[i];
        inc[op[i].l]+=op[i].d;
        inc[op[i].r+1]-=op[i].d;
    }
    for(int i=1;i<=n;i++)
    {
        inc[i]+=inc[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<inc[i]+v[i]<<" ";
    }

}

//      1   2   3   4  <--- idx
// -------------------
// Q1   1   0  -1   0
// Q2   1   0   0  -1
// Q3   0   1   0  -1
// ------------------
// Sum  2   1   -1  -2
// Pre  2   3    2   0



//       L R D    rept
// 		 1 2 1  *  2 = 2
// 		 1 3 2  *  3 = 6
// 		 2 3 4  *  2 = 8

// 		  idx 1 2 3   4
// 		  arr 0 0 0   0
// 		  Q1  2 0 -2  0
// 		  Q2  6 0  0 -6
// 		  Q3  0 8  0 -8

// 		  sum 8 8 -2 -14
// 		  pr2 8 16 14 0