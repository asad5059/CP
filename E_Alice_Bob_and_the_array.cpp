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
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0, x = 0, first0 = -1, first1 = -1,y=0, last0 = -1, last1 = -1, pos = 0, neg = 0, mx = -1e18;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 0)
            {
                sum += a[i], pos++;
                if (pos == 1)
                    first1 = i;
                last1 = i;
            }
            else
            {
                neg++;
                if (neg == 1)
                {
                    first0 = i;
                }
                last0 = i;
            }
            mx = max(a[i], mx);
        }
        // cout<<first1<<" "<<last1<<endl
        bool f = 0;
        for (int i = first1; i <= last1; i++)
        {
            if (a[i] < 0 && a[i - 1] >= 0)
            {
                f = 1;
            }
            else if (a[i] > 0 && f == 1)
                f = 0, x++;
            // cout<<x<<endl;
        }
        f=0;
        for (int i = last1; i > first1; i--)
        {
            if (a[i] < 0 && a[i - 1] >= 0)
            {
                f = 1;
            }
            else if (a[i] > 0 && f == 1)
                f = 0,y++;
            // cout<<x<<endl;
        }
        if (neg == n)
            sum = mx;
        cout << "Case " << tc << ": " << sum << " " << x << endl;
        // a.clear();
    }
}