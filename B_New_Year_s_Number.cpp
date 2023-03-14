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
        ll n, f = 0;
        cin >> n;
        if (n < 2020)
        {
            cout << "NO\n";
        }
        else if (n == 2020 || n == 2021)
        {
            cout << "YES\n";
        }
        else
        {
            if((n/2020)>=(n%2020)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}