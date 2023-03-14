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
    ll q;
    cin >> q;
    vector<ll> s, s2;
    vector<ll> ans;
    ll p=0;
    for(int k=0;k<q;k++)
    {
        ll t, x;
        cin >> t ;
        if (t == 1)
        {
            cin>>x;
            s.pb(x);
        }
        else if (t == 2)
        {
            cin>>x;
            s2.clear();

            for (auto i : s)
                s2.pb(i + x);
            s = s2;
            sort(s.begin(),s.end());
        }
        else
        {
            ans.pb(s[p]);
            p++;
        }
    }
    for (auto i : ans)
        cout << i << "\n";
}