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
        vector <ll> a, b;
        for(int i=0;i<2*n;i++)
        {
            int x, y;
            cin >> x >> y;
            if (x)
            {
                a.pb(abs(x));
            }
            else
            {
                b.pb(abs(y));
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        double ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += sqrt(a[i] * a[i] + b[i] * b[i]);
        }
        cout <<setprecision(15)<<fixed<< ans << endl;
    }
}