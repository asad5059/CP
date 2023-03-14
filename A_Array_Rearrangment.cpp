#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, x, cnt = 0,m;
        cin >> n >> x;
        vector<ll> v, v1;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            v.push_back(m);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            v1.push_back(m);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        reverse(v.begin(),v.end());
        for (int i = 0; i < n; i++)
        {
            if (cnt >0)
                break;
            else if (v[i] + v1[i] > x)
                cnt++;
        }
        if (cnt >0)
            cout << "No\n";
        else
        {
            cout << "Yes\n";
        }
    }
}