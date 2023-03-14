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
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        ll mi1 = a[0], mi2 = a[1];
        ll ans = n * mi1 + n * mi2;
        ll sm1 = 0, sm2 = 0;
        ll c1 = 0, c2 = 0;
        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                c1 += 1;
                if (a[i] < mi1)
                {
                    sm1 += mi1;
                    mi1 = a[i];
                }
                else
                {
                    sm1 += a[i];
                }
                ll tmp = sm1 + (n - c1) * mi1 + sm2 + (n - c2) * mi2;
                ans = min(ans, tmp);
            }
            else
            {
                c2 += 1;
                if (a[i] < mi2)
                {
                    sm2 += mi2;
                    mi2 = a[i];
                }
                else
                {
                    sm2 += a[i];
                }
                ll tmp = sm1 + (n - c1) * mi1 + sm2 + (n - c2) * mi2;
                ans = min(ans, tmp);
            }
        }
        cout<<ans<<endl;
    }
}