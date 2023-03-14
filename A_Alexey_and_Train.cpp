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
        ll st[n], dep[n], lt[n];
        for (int i = 0; i < n; i++)
        {
            cin>>st[i]>>dep[i];
        }
        for (int i = 0; i < n; i++)
            cin>>lt[i];
        ll s = lt[0] + st[0];
        for (int i = 0; i < n - 1; i++)
        {

            ll p = max(dep[i], s + (ll)ceil((dep[i] - st[i]) / 2.0));
            s = p + lt[i + 1] + st[i + 1] - dep[i];
        }
        cout<<s<<endl;
    }
}