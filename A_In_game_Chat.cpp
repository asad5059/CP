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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt_b = 0, cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (cnt == 0 && s[i] == ')')
                cnt_b++;
            else
            {
                cnt++;
            }
        }
        if (cnt_b > cnt)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
