//Credit : Tushar.3010

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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a * d) > (c * b))
    { // this means that the width of the frame is more
        int num = (a * d) - (b * c);
        int deno = a * d;
        int fac = __gcd(num, deno);
        num = num / fac;
        deno = deno / fac;
        cout << num << "/" << deno;
    }
    else if ((a * d) < (c * b))
    {
        // this condition means that the frame will take the size of the length
        int num = (b * c) - (a * d);
        int deno = b * c;
        int fac = __gcd(num, deno);
        num = num / fac;
        deno = deno / fac;
        cout << num << "/" << deno;
    }
    else
    {
        cout << 0 << "/" << 1;
    }
}