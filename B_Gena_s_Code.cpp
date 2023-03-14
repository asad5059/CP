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
bool f(string x)
{
    map<char, int> mp;
    for (auto i : x)
    {
        if (i != '0' && i != '1')
            return 0;
        mp[i]++;
    }
    if (mp.size() > 2 || mp['1'] > 1)
        return 0;
    return 1;
}
int main()
{
    fastio();
    ll n, k;
    cin >> n;
    string x;
    string ans = "0", p;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == "1")
        {
            continue;
        }
        else if (x == "0")
        {
            cout << 0;
            return 0;
        }
        else if (f(x))
        {
            if (ans[0]=='0')
                ans = x;
            else
            {
                for (int i = 1; i < x.size(); i++)
                    ans += '0';
            }
        }
        else
        {
            p = x;
        }
    }
    if (p.size() == 0)
        p = (ans=="0"?"1":ans);
    else
    for (int i = 1; i < ans.size() && p.size() > 0; i++)
        p += '0';
    cout << p;
}