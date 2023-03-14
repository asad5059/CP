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
        ll n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        if (a == 0 && b == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        if (b >= 0)
        {
            cout << (a * n) + (b * n) << "\n";
        }
        else
        {
            ll st = 0, sc1 = 0, sc2 = 0, cnt = 0, o = 0, k = 0;
            k = 0;
            for (int i = 0; i < n;)
            {
                if (s[i - 1] != '0' && s[i] == '0')
                {
                    cnt = 0;
                    while (s[i] == '0')
                    {
                        k++;
                        i++;
                        cnt++;
                    }
                    // cout << cnt << "\n";
                    sc1 += ((a * cnt) + b);
                }
                else
                    i++;
            }
            k = n - k;
            // cout<<"K : "<<n-k<<"\n";
            sc1 += ((a * k) + b);

            o = 0;
            for (int i = 0; i < n;)
            {
                if (s[i - 1] != '1' && s[i] == '1')
                {
                    cnt = 0;
                    while (s[i] == '1')
                    {
                        o++;
                        i++;
                        cnt++;
                    }
                    // cout << cnt << "\n";
                    sc2 += a * cnt + b;
                }
                else
                    i++;
            }
            o = n - o;
            sc2 += a * o + b;
            cout << max(sc1,sc2) << "\n";
        }
    }
}