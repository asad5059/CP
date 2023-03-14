#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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
        vector<ll> v(n), a(n),v2,v3;
        map<ll, ll> mp;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            s.insert(v[i]);
        }
        sort(v.begin(), v.end());
        ll p1 = -1, p2 = -1, mi = 1e18;
        for (int i = 0; i < n; i++)
        {
            if (abs(v[i] - v[i + 1]) < mi && i+1<n)
            {
                mi = abs(v[i] - v[i + 1]);
                p1 = i;
                p2 = i + 1;
            }
            if (abs(v[i] - v[i - 1]) < mi && i-1>=0)
            {
                mi = abs(v[i] - v[i - 1]);
                p1 = i - 1;
                p2 = i;
            }
        }
        a[0] = v[p1];
        a[n - 1] = v[p2];
        v[p1] = -1;
        v[p2] = -1;

        cout << a[0] << " ";
        for (int i = 0; i <n ; i++)
        {
            if (v[i] != -1)
            {
                if(v[i]>a[0])
                {
                    v2.pb(v[i]);
                }
                else
                v3.push_back(v[i]);
            }
        }
        for(auto i:v2)
        cout<<i<<" ";
        for(auto i:v3)
        cout<<i<<" ";
        cout << a[n - 1] << "\n";
    }
}