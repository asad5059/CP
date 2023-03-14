#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
ll n;
char a[51][51];
void print(ll tc, ll ans, ll way)
{
    cout << "Case #" << tc << ": ";
    if (ans == -1 && way == -1)
        cout << "Impossible\n";
    else
        cout << ans << " " << way << '\n';
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        memset(a, '#', sizeof(a));
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        bool f = 0;
        ll cnt = 0;
        map<ll, ll> mp;
        set<pair<ll, ll>> st;
        for (int i = 0; i < n; i++)
        {
            f = 1;
            cnt = 0;
            vector<pair<ll, ll>> vec;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 'O')
                {
                    f = 0;
                    break;
                }
                else if (a[i][j] == 'X')
                {
                    continue;
                }
                else if (a[i][j] == '.')
                {
                    vec.push_back({i,j});
                    cnt++;
                }
            }
            if (f)
            {
                if(cnt==1)
                st.insert(vec[0]);
                mp[cnt]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            f = 1;
            cnt = 0;
            vector<pair<ll, ll>> vec;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == 'O')
                {
                    f = 0;
                    break;
                }
                else if (a[j][i] == 'X')
                {
                    continue;
                }
                else if (a[j][i] == '.')
                {
                    vec.push_back({j,i});
                    cnt++;
                }
            }
            if (f)
            {
                if(cnt==1)
                st.insert(vec[0]);
                mp[cnt]++;
            }
        }
        if (mp.size() == 0)
            print(tc, -1, -1);
        else
        {
            auto it = *mp.begin();
            if(st.size()==0)
            print(tc, it.first, it.ss);
            else
            print(tc, it.first, st.size());
            
        }
    }
}