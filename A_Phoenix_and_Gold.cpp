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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll a[n],sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        if (sum == x)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int f = 1;
            while (f)
            {
                f = 0;
                ll b[n];
                for (int i = 1; i < n; i++)
                    b[i - 1] = a[i];
                b[n - 1] = a[0];
                ll sum2 = 0;
                for (int i = 0; i < n; i++)
                {
                    a[i] = b[i];
                    sum2 += b[i];
                    if (sum2 == x)
                        f = 1;
                }
                if (f == 0)
                {
                    for (int i = 0; i < n; i++)
                        cout << a[i] << " ";
                    cout << endl;
                }
            }
        }
    }
}