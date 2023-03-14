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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int x, y;
        x = accumulate(a.begin(), a.end(), 0);
        y = accumulate(b.begin(), b.end(), 0);
        if (x > y)
            cout << 0 << endl;
        else
        {
            x = 0;
            y = 0;
            int f = 0;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                int tmp = a[i];
                a[i] = b[i];
                b[i] = tmp;
                cnt++;
                x = accumulate(a.begin(), a.end(), 0);
                y = accumulate(b.begin(), b.end(), 0);
                if (x > y)
                {
                    cout << cnt << endl;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << -1 << endl;
        }
    }
}
