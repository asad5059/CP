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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (2 * k + 1 > n)
        {
            cout << "NO";
        }

        else if (k == 0)
        {
            cout << "YES";
        }
        else
        {

            bool f = true;
            for (int i = 0; i < k; i++)
            {
                if (s[i] != s[n - i - 1])
                {
                    f = false;
                }
            }
            if (f)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        cout<<"\n";
    }
}