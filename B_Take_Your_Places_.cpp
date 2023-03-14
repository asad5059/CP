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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), v1(n), v2(n), e, o;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                a[i] = 0;
            else
                a[i] = 1;
            mp[a[i]]++; //odd - 0 and even - 1
        }
        if (abs(mp[0] - mp[1]) > 1)
        {
            cout << -1 << "\n";
            continue;
        }
        ll ans = 0;
        if (n % 2)
        {
            bool f = (mp[0] > mp[1] ? 1 : 0); //1 - odd>even
            for (int i = 0; i < n; i++)
            {
                if (f)
                {
                    if (i % 2 == 0)
                    {
                        v1[i] = 0;
                    }
                    else
                        v1[i] = 1;
                }
                else
                {
                    if (i % 2 == 0)
                    {
                        v1[i] = 1;
                    }
                    else
                        v1[i] = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (v1[i] == 0 && a[i] == 1)
                {
                    o.push_back(i);
                }
                if (v1[i] == 1 && a[i] == 0)
                {
                    e.push_back(i);
                }
            }
            for(int i=0;i<o.size();i++)
            {
                ans+=abs(o[i]-e[i]);
            }
        }
        else
        {
            for(int i=0;i<n;i+=2)
            {
                v1[i]=1;
            }
            for(int i=1;i<n;i+=2)
            {
                v2[i]=1;
            }
            for(int i=0;i<n;i++)
            {
                if(v1[i]==1 && a[i]==0)
                {
                    e.pb(i);
                }
                if(v1[i]==0 && a[i]==1)
                o.pb(i);
            }
            ll cnt1=0,cnt2=0;
            for(int i=0;i<o.size();i++)
            {
                cnt1+=abs(o[i]-e[i]);
            }
            o.clear();
            e.clear();

            for(int i=0;i<n;i++)
            {
                if(v2[i]==1 && a[i]==0)
                {
                    e.pb(i);
                }
                if(v2[i]==0 && a[i]==1)
                o.pb(i);
            }
            for(int i=0;i<o.size();i++)
            {
                cnt2+=abs(o[i]-e[i]);
            }
            ans=min(cnt1,cnt2);
        }
        cout << ans << "\n";
    }
}