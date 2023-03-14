#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
ll a, b, c, d, e, f;
ll dp[100000];
ll fn(ll n) {
    if (n == 0) return dp[n]=a;
    if (n == 1) return dp[n]=b;
    if (n == 2) return dp[n]=c;
    if (n == 3) return dp[n]=d;
    if (n == 4) return dp[n]=e;
    if (n == 5) return dp[n]=f;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}