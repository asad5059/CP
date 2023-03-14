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
ll binpow(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b%2!=0)
        {
            res*=a;
            b--;
        }
        a*=a;
        b/=2;
    }
    return res;
}
int main()
{
    fastio();
    ll t;
    // cout<<binpow(10,3)<<"\n";
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll tot = (n * n) - 1;
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        if(n==3)
        {
            cout<<8<<"\n";
            continue;
        }
        ll cnt = 8, i = ((n-1)/2)+ 1;
        ull ans=1;
        for(int j=2;j<i;j++)
        {
            ans=ans+binpow(j,2);
        }
        cout << ans*8 << "\n";
        // 1*8+2*16+3*24+4*32
        //8+32+72+128+5*40
        // 8*(1+4+9+16+25)
        // 3 5 7
    }
}