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
    ll n, m;
    cin >> n >> m;
    ll mx = (n % 2 == 0 ? (n * n) / 2 : (n * n) / 2 + 1);
    if (m > mx)
    {
        cout << "NO";
    }
    else
    {
        cout<<"YES\n";
        ll k = 1, l = 1;
        for (int i = 0; i < n; i++)
        {
            k = l ^ 1;
            for (int j = 0; j < n; j++)
            {
                if (!k && m)
                {
                    cout << "L";
                    m--;
                }
                else
                    cout << "S";
                k = k ^ 1;
            }
            cout << "\n";
            l = l ^ 1;
        }
    }
}