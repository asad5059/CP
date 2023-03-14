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
vector<ll> v;
void f(string s)
{
    if (s.size() >= 1)
    {
        ll x = 1, r = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            ll d = s[i] - '0';
            r += (d * x);
            x *= 10;
        }
        v.pb(r);
    }
    if (s.size() == 10)
    {
        return;
    }
    f(s + '4');
    f(s + '7');
}
int main()
{
    fastio();
    string s = "";
    f(s);
    sort(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    ll n;
    cin >> n;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            cout << i + 1;
            return 0;
        }
    }
}