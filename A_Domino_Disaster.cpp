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
int main()
{
    fastio();
    map<char, char> mp;
    mp['L'] = 'R';
    mp['R'] = 'L';
    mp['U'] = 'D';
    mp['D'] = 'U';
    string s;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n >> s;
        map<char, ll> mp2;
        for (auto i : s)
            mp2[i]++;
        string ans = "";
        bool f = 0;
        for (auto i : s)
        {
            if (mp2[i] == mp2[mp[i]])
            {
                if (!f)
                {
                    ans += 'L';
                    f = 1;
                }
                else if (f)
                {
                    ans += 'R';
                    f = 0;
                }
                continue;
            }
            else
            {
                ans += mp[i];
            }
        }
        cout << ans << "\n";
    }
}