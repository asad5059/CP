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
    ll a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    ll mi = ((k1 - 1) * a1) + ((k2 - 1) * a2);
    if (mi >= n)
        cout << 0 << " ";
    else
        cout << n - mi << " ";
    ll mx = (k1 * a1) + (k2 * a2);
    ll tot = 0;
    mi=min(k1,k2);
    if(k1==mi)
    {
        while(n>0 && a1>0)
        {
            a1--;
            n-=k1;
            if(n<0) break;
            tot++;
        }
        while(n>0 && a2>0)
        {
            a2--;
            n-=k2;
            if(n<0) break;
            tot++;
        }
    }
    else
    {
        while(n>0 && a2>0)
        {
            a2--;
            n-=k2;
            if(n<0) break;
            tot++;
        }
        while(n>0 && a1>0)
        {
            a1--;
            n-=k1;
            if(n<0) break;
            tot++;
        }
    }
    cout<<tot;
}