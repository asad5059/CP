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
set<ll> v;
int main()
{
    fastio();
    ll t;
    cin >> t;
    ll x = 1, m = 1;
    while (x < 1e12 + 5)
    {
        v.insert(m * m * m);
        x = m * m * m;
        m++;
    }
    while (t--)
    {
        ll n;
        bool f = 0;
        cin >> n;
        for (auto it:v)
        {
            ll x=n-it;
            if(v.find(x)!=v.end())
            {
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if (!f)
            cout << "NO\n";
    }
}