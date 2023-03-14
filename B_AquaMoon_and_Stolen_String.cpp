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
        ll n, m, sz;
        cin >> n >> m;
        sz = n * (n - 1) / 2;
        int cancel[n];
        memset(cancel, 0, sizeof(cancel));
        vector<string> org(n), pr(n - 1), sorg;
        map<char, int> mp;
        map<string, vector<int>> mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> org[i];
            for (auto j : org[i])
                mp[j]++;
            string kx = org[i];
            sort(kx.begin(), kx.end());
            sorg.pb(kx);
            mp2[kx].pb(i);
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> pr[i];
            for (auto j : pr[i])
            {
                mp[j]--;
            }
        }
        string ans = "";
        for (auto i : mp)
        {
            int cnt = 0;
            while (cnt < i.ss)
                ans += i.ff, cnt++;
        }
        vector<int> ans2 = mp2[ans];
        int flag[ans2.size()];
        memset(flag, 0, sizeof(flag));
        if (ans2.size() == 1)
        {
            cout << org[ans2[0]] << endl;
            continue;
        }
        else
        {
            ans = "";
            for (int i = 0; i < m; i++)
            {
                vector<ll> vec(26);
                for (int j = 0; j < ans2.size(); j++)
                    vec[org[ans2[j]][i] - 'a']++;
                for (int j = 0; j < ans2.size() - 1; j++)
                    vec[pr[j][i] - 'a']++;
                for (int j = 0; j < 26; j++)
                {
                    if (vec[j] % 2 != 0)
                    {
                        ans = ans + char('a' + j);
                        break;
                    }
                }
            }
            cout<<ans<<"\n";
        }
    }
}