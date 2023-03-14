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
        ll n, mx = -1;
        cin >> n;
        vector<ll> v(n);
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i >= 1 && i <= n - 2)
                mx = max(mx, v[i]);
            s.insert(v[i]);
        }
        ll hill = 0, valley = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i + 1] && v[i] > v[i - 1])
            {
                hill++;
            }
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
            {
                valley++;
            }
        }
        if (s.size() == 1)
            cout << 0 << endl;
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (v[i] == mx && mx>v[i + 1]  && mx>v[i - 1] )
                {
                    v[i + 1] = mx;
                    break;
                }
            }
            ll hi = 0, vl = 0;
            for (int i = 1; i < n; i++)
            {
                if (v[i] > v[i + 1] && v[i] > v[i - 1])
                {
                    hi++;
                }
                if (v[i] < v[i + 1] && v[i] < v[i - 1])
                {
                    vl++;
                }
               // cout<<v[i]<<" ";
            }
           // cout<<"\n";
            cout<<hi<<" "<<vl<<endl;
        }
    }
}
