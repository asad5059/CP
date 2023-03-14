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
    int n, m, q;
    cin >> n >> m >> q;

    string s, t;
    cin >> s >> t;

    vector<int> enn(n, 0);
    vector<int> stt(n, 0);
    int cr = 0;

    for (int i = m - 1; i < n; i++)
    {
        if (s.substr(i + 1 - m, m) == t)
            cr++;
        enn[i] = cr;
        stt[i - m + 1] = cr;
    }

    for (int i = n - m; i < n; i++)
        stt[i] = cr;

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int t = 0;
        if (l - 2 >= 0)
            t = stt[l - 2];
        cout << max(0, enn[r - 1] - t) << '\n';
    }
}
