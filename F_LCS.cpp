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
ll dp[5000][5000];
ll dir[5000][5000];
string s1, s2;
ll f(ll i, ll j)
{
    if (i == 0 || j == 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll a = 0, b = 0, c = 0;
    if (s1[i - 1] == s2[j - 1])
    {
        a = max(1 + f(i - 1, j - 1),a);
        dir[i][j] = 1;
    }
    else
    {
        b = f(i - 1, j);
        c = f(i, j - 1);
        if (b > c)
            dir[i][j] = 2;
        else
            dir[i][j] = 3;
    }
    return dp[i][j] = max(a, max(b, c));
}
string ans="";
void g(int i, int j)
{
    if (i == 0 || j == 0)
    {
        reverse(ans.begin(),ans.end());
        cout<<ans;
        return;
    }
    if (dir[i][j] == 1)
    {
        ans+=s1[i-1];
        g(i - 1, j - 1);
    }
    else if (dir[i][j] == 2)
        g(i - 1, j);
    else if (dir[i][j] == 3)
        g(i, j - 1);
}
int main()
{
    fastio();
    string ans = "";
    memset(dp, -1, sizeof(dp));
    cin >> s1 >> s2;
    cout<<f(s1.size(), s2.size());
    // g(s1.size(), s2.size());
}