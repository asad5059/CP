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
bool cmp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.ff == p2.ff)
    {
        if (p1.ss > p2.ss)
            return 1;
        else
            return 0;
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k,x,y,c1=0,o=0,ans=-1e18;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        for(int i=n-1;i>=max(0LL,n-200);i--)
        {
            for(int j=n-1;j>=max(0LL,n-200);j--)
            {
                if(i!=j)
                {
                    x=i+1; y=j+1;
                    o=(a[i]|a[j]);
                    c1=(x*y)-(k*o);
                    ans=max(ans,c1);
                }
            }
        }
        cout<<ans<<"\n";

        
    }
}