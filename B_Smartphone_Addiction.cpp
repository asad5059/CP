#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    ll pnt = 0, n, m, t, cnt = 0;
    cin >> n >> m >> t;
    ll p = n, f = 0;
    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (i == 0)
        {
            p = p - x;
            if (p <= 0)
                f = 1;
            if (p >= n)
                p = n;
        }

        if (i > 0)
        {
            p -= x - pnt;
            if (p <= 0)
                f = 1;
            if (p >= n)
                p = n;
        }
        p += (y - x);
        pnt = y;
        if (p <= 0)
            f = 1;
        if (p >= n)
            p = n;
        if (f == 1)
        {
            break;
        }
        //cout<<p<<endl;
    }

    p -= t - pnt;
    if (p > 0 && f != 1)
        cout << "Yes";
    else
    {
        cout << "No";
    }
}
