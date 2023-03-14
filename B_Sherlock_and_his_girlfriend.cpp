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
int main()
{
    fastio();
    ll n;
    cin >> n;
    n++;
    bool a[n + 5]{0};
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i + i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    if (n > 3)
    {
        cout << 2 << endl;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == 0)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
    }
    else
    {
        cout << 1 << endl;
        for (int i = 2; i <= n; i++)
            cout << 1 << " ";
    }
}