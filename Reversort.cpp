#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void reverse(int i, int j, int a[])
{
    int x = i;
    int y = j;

    while (x <= y)
    {
        swap(a[x], a[y]);
        x++;
        y--;
    }
}
int main()
{
    fastio();

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int minipos = n - 1;
            int mini = INT_MAX;

            for (int j = n - 1; j >= i; j--)
            {
                if (a[j] < mini)
                {
                    mini = a[j];
                    minipos = j;
                }
            }

            reverse(i, minipos, a);

            ans += minipos - i + 1;
        }

        cout << "Case #" << tc << ':' << " " << ans << endl;
    }

    return 0;
}