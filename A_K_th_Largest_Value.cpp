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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll x, y;
    while (q--)
    {
        cin >> x >> y;
        if (x == 1)
        {
            if (v[y - 1] == 0)
            {
                v[y - 1] = 1, mp[1]++, mp[0]--;
            }
            else
            {
                {
                    v[y - 1] = 0, mp[0]++, mp[1]--;
                }
            }
        }
        else if (x == 2)
        {
            //cout<<mp[0]<<" "<<mp[1]<<endl;
            if (mp[1] < y)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
    }
}