#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
ll wt[1001];
ll val[1001];
// ll knapsack(ll w, ll n)
// {
//     if (dp[n][w] != 0)
//         return dp[n][w];
//     if (w == 0 || n == 0)
//         return 0;
//     ll a = -1e18, b = -1e18;
//     if (wt[n - 1] <= w)
//         return max(val[n - 1] + knapsack(w - wt[n - 1], n - 1), knapsack(w, n - 1));
//     else
//         return dp[n][w] = knapsack(w, n - 1);
// }
int main()
{
    fastio();
    ll n, w;
    cin >> n >> w;
    ll dp[n + 1][w + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][w];
}