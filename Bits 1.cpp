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
int main()
{
    fastio();
    //power of 2
    // print 2^0 to 2^30
    for(int n=0;n<=30;n++)
    {
        cout<<"2^"<<n<<" : "<<(1<<n)<<"\n";
    }
    // formula : 1<<n == 2^n

    // left shift :
    /*
        8 4 2 1   Decimal
        -----------------
        0 1 0 1     5

        5<<1 = 0101 << 1
             = 1010
    */
    int n=5;
    bitset<10> x=5;
    cout<<"Before LS : \n";
    cout<<n<<" : "<<x<<"\n";

    n=(n<<1);
    x=n;
    cout<<"After LS : \n";
    cout<<n<<" : "<<x<<"\n";

    n=(n<<1);
    x=n;
    cout<<"After LS 2nd time: \n";
    cout<<n<<" : "<<x<<"\n";

    n=(n<<1);
    x=n;
    cout<<"After LS 3rd time : \n";
    cout<<n<<" : "<<x<<"\n";


    // So, x<<n is 2*n. where x>1.

    // Every odd number has last bit as 1. Even numbers has it as 0.
}