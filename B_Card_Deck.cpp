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
        ll n, x, pos = -1;
        cin >> n;
        vector<ll> vec;
        set<ll> s;
        set<ll>::iterator it;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vec.pb(x);
            mp[x] = i;
            s.insert(x);
        }
        ll cnt = 0,mx;
        while (cnt != n)
        {
            mx = *s.rbegin();
            for (int i = mp[mx]; i < vec.size(); i++)
            {
                cout << vec[i] << " ";
                s.erase(vec[i]);
                cnt++;
            }
            vec.resize(mp[mx]);
        }
        cout<<"\n";
    }
}