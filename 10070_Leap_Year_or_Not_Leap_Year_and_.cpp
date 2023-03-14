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
bool f(string s,ll m)
{
    ll r=0;
    for(auto i:s)
    {
        r=(r*10+i-'0')%m;
    }
    return r==0;
}
int main()
{
    string s;
    int flag,flag2;
    while(cin>>s)
    {
        if(flag==1)
            printf("\n");
        flag2=flag=0;
        if((f(s,4)==1 && f(s,100)==0)|| f(s,400)==1)
        {
            printf("This is leap year.\n");
            flag2=flag=1;
        }
        if(f(s,15)==1)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(flag2==1 && f(s,55)==1)
        {
            printf("This is bulukulu festival year.\n");
            flag=1;
        }
        if(flag!=1 && flag2!=1)
            printf("This is an ordinary year.\n\n");
    }
    return 0;
}