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
bool ok(ll n)
{
    if (n == 1)
        return 1;
    if (n == 2 || n == 3)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}
ll ans = 0, sz = 0;
void f(string s, vector<char> v, int j)
{

    if (s.size() >= 1 && (s[0] > '0' && s[0] <= '9'))
    {
        ll x = stol(s);
        if (ok(x))
        {
            sz = s.size();
            ans = x;
            return;
        }
    }
    if (s.size() > 2)
        return;
    for (int i = j + 1; i < v.size(); i++)
    {
        f(s + v[i], v, i);
    }
}
int main()
{
    fastio();
    ll t;
    string s;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n >> s;
        vector<char> v;
        for (auto i : s)
        {
            v.pb(i);
            if (i=='1' || i=='4' || i=='6' || i=='8' || i=='9')
            {
                cout << 1 << "\n"
                     << i << "\n";
                ans = -1;
                break;
            }
        }
        if (ans != -1)
        {
            f("", v, -1);
            cout << sz << "\n"
                 << ans << '\n';
        }
        ans = 0;
    }
}