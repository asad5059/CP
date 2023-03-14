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
// bool f(ll a[3][3])
// {
//     bool k = 1;
//     ll sum=a[0][0]+a[0][1]+a[0][2];
//     k=0;
//     return k;
// }
int main()
{
    fastio();
    ll a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    ll mx = max(max(a[1][0] + a[2][0], a[2][0] + a[2][1]), max(a[0][1] + a[0][2], a[0][2] + a[1][2]));
    mx = max(a[0][1] + a[2][1], max(mx, a[1][0] + a[1][2]));
    for (int i = mx+1; i <= 1e7; i++)
    {
        ll t1, t2, t3;
        t1 = i - (a[0][1] + a[0][2]);
        t2 = i - (a[1][0] + a[1][2]);
        t3 = i - (a[2][0] + a[2][1]);
        a[0][0] = t1;
        a[1][1] = t2;
        a[2][2] = t3;
        ll sum = a[0][0] + a[0][1] + a[0][2];
        if (sum != (a[1][0] + a[1][1] + a[1][2]) || sum != (a[2][0] + a[2][1] + a[2][2]) || sum != (a[0][0] + a[0][1] + a[0][2]) || sum != (a[0][1] + a[1][1] + a[2][1]) || sum != (a[0][2] + a[1][2] + a[2][2]) || sum != (a[0][0] + a[1][1] + a[2][2]) || sum != (a[0][2] + a[1][1] + a[2][0]))
        {

            continue;
        }
        else
        {
            for (int k = 0; k < 3; k++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << a[k][j] << " ";
                }
                cout << "\n";
            }
            return 0;
        }
    }
}