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
    int t;
    cin >> t;
rr:
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> A(n), B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        vector<pair<ll,ll>> v;
        for (int i = 0; i < n; i++)
        {
            v.pb({A[i], B[i]});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            A[i] = v[i].first;
            B[i] = v[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            int pr,qr;
            while (b > 0 && B[i] > 0)
            {
                pr=B[i] - a;
                qr=b - A[i];
                B[i] = max(0, pr);
                b = max(0, qr);
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (B[i] > 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}