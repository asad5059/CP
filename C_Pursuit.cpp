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
deque<ll> a;
vector<ll> b;
ll f(ll x)
{
    ll x1 = 0, x2 = 0;
    deque<ll> a1 = a;
    vector<ll> b1 = b;
    for (int i = a1.size(); i < x; i++)
    {
        b1.pb(0);
        a1.push_front(100);
    }
    ll lim = x - (x / 4);
    for (int i = 0; i < lim; i++)
        x1 += a1[i], x2 += b1[i];
    return x1 - x2;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s1 = 0, s2 = 0,lim;

        a.clear();
        b.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        lim=n-(n/4);
        for(int i=0;i<lim;i++) s1+=a[i], s2+=b[i];
        if(s1>=s2)
        {
            cout<<0<<"\n";
            continue;
        }
        ll l = 0, r = 1e5, m;
        while (l + 1 < r)
        {
            m = (l + r) / 2;
            if (f(n + m) >= 0)
            {
                r = m;
            }
            else
                l = m;
        }
        cout << r << "\n";
    }
}