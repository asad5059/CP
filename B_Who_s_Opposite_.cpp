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
    ll t;
    cin >> t;
    while (t--)
    {
        ll k,k2, a, b, c, d;
        cin >> a >> b >> c;
        if (a < b)
            swap(a, b);
        k = c + abs(a - b);
        k2 = c - abs(a - b);
        k2=max(1LL,k2);
        if(max(a,max(b,c))>2*abs(a-b)) k=-1,k2=-1;
        else if(k>2*abs(a-b)) k=k2;
        cout << k << "\n";
    }
}