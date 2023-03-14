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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    string a, b;
    cin >> a >> b;
    map<string, ll> mp;
    ll len = a.size(), ans = 0, cnt = 0;
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            ans += abs(a[i] - b[i]);
        }
        cout << ans;
        return 0;
    }
    for (int i = 0; i < b.size() - a.size() + 1; i++)
    {
        string k = b.substr(i, len);
        cnt = 0;
        auto it=mp.find(k);
        if (it == mp.end())
        {
            for (int j = 0; j < k.size(); j++)
                cnt += abs(a[j] - k[j]);
            mp[k] = cnt;
            ans+=cnt;
        }
        else
        ans+=it->ss;
    }
    // ans = 0;
    // for(auto i:mp)
    // cout<<i.ff<<" "<<i.ss<<"\n";
    // for (auto i : mp)
    // {
    //     string k = i.ff;
    //     ll cnt = 0;
    //     for (int j = 0; j < k.size(); j++)
    //     {
    //         cnt += abs(a[j] - k[j]);
    //     }
    //     ans += (i.ss * cnt);
    // }
    cout << ans;
}