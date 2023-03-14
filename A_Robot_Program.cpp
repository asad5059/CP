#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, cnt = 0, x = 0, y = 0;
        cin >> a >> b;
        if (a == b)
            cnt = 2 * a;
        else
        {
            x = min(a, b);
            y = max(a, b);
            cnt = x * 2;
            cnt += abs(x-y) * 2;
            cnt--;
        }
        cout << cnt << endl;
    }
}