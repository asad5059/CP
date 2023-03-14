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
int a[10000005];
int b[10000005];
int main()
{
    fastio();
    ll t;
    cin >> t;
    memset(b, -1, sizeof(b));
    for (int i = 1; i < 10000005; i++)
        a[i]++;
    for (int i = 2; i < 10000005; i++)
    {
        for (int j = i; j < 10000005; j += i)
            a[j] += i;
        if (a[i] < 10000005 && b[a[i]] == -1)
            b[a[i]] = i;
    }
    b[1] = 1;
    while (t--)
    {
        int c;
        cin >> c;
        cout<<b[c]<<endl;
    }
}
