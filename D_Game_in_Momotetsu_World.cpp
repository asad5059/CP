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
char a[2001][2001];
ll r, c, t = 0, ao = 0;
ll f(int i, int j, int k)
{
    if (r == 1 && c == 1)
        return 0;
    if (i == r && j == c)
    {
        if (a[i][j] == '+')
            return 1;
        else
            return -1;
    }
    t = 0, ao = 0;
    if (k == 0 || k == -1)
    {
        if (i + 1 <= r && j + 1 <= c)
        {
            t += max(f(i + 1, j, k ^ 1), f(i, j + 1, k ^ 1));
        }
        else if (i + 1 <= r)
        {
            t += f(i + 1, j, k ^ 1);
        }
        else
            t += f(i, j + 1, k ^ 1);
    }
    if (k == 1)
    {
        if (k == -1)
            k = 0;
        if (i + 1 <= r && j + 1 <= c)
        {
            ao += max(f(i + 1, j, k ^ 1), f(i, j + 1, k ^ 1));
        }
        else if (i + 1 <= r)
        {
            ao += f(i + 1, j, k ^ 1);
        }
        else
            ao += f(i, j + 1, k ^ 1);
    }
    cout << "\n"
         << t << " " << ao;
    if (t > ao)
        return 1;
    else if (ao > t)
        return 2;
    else
        return 0;
}
int main()
{
    fastio();
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }
    ll k = f(1, 1, -1);
    if (k == 0)
        cout << "Draw";
    else if (k == 1)
        cout << "Takahashi";
    else
        cout << "Aoki";
}