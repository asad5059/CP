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
    ll n, m, d;
    cin >> n >> m >> d;
    ll a[n][m];
    set <ll> s;
    vector <ll> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            s.insert(a[i][j]);
        }
    }
    for(auto i: s)
    v.pb(i);
    ll mi = 1e18, cnt = 0,mid=v.size()/2;
// cout<<mid<<"\n";
r:
    for (int l=max(0LL,mid-5);l<=min(mid+5,(ll)v.size()-1);l++)
    {
        mid = v[l];
        cnt = 0;
        s.clear();
        bool f=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout<<abs(a[i][j]-mid)/d<<" ";
                ll x = abs(a[i][j] - mid);
                if (a[i][j] >= mid && x % d == 0)
                {
                    cnt += x / d;
                    s.insert(a[i][j] - x);
                }
                else if (x % d == 0)
                {
                    s.insert(a[i][j] + x);
                    cnt += x/d;
                }
                else
                {
                    f=1;
                    break;
                }
                
            }
            if(f)
            {
                s.clear();
                break;
            }
            // cout<<"\n";
        }
        // cout << cnt << endl;
        if (s.size() == 1)
            mi = min(cnt, mi);
    }
    if (mi == 1e18)
        mi = -1;
    cout << mi;
}