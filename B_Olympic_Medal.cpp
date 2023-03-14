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
double R1, P1, R2 = 0, P2;
double ok(double m, double rat)
{
    double m1 = P1 * 3.1416 * (R1 * R1 - m * m);
    double m2 = P2 * 3.1416 * m * m;
    double c3 = m1 / m2;
    return c3;
}
int main()
{
    fastio();
    ll n, m, k;
    cin >> n;
    ll r1[n];
    for (int i = 0; i < n; i++)
        cin >> r1[i];
    cin >> m;
    ll p1[m];
    for (int i = 0; i < m; i++)
        cin >> p1[i];
    cin >> k;
    ll p2[k];
    for (int i = 0; i < k; i++)
        cin >> p2[i];
    sort(r1, r1 + n);
    sort(p1, p1 + m);
    sort(p2, p2 + k);
    double mi, mo;
    cin >> mi >> mo;
    double rat = mi / mo;
    R1 = r1[n - 1], P1 = p1[m - 1], P2 = p2[0];
    double b = 0, e = R1, mid;
    while (abs(e - b) > 1e-6)
    {
        // cout<<b<<" "<<e<<"\n";
        mid = (b + e) / 2;
        if (ok(mid, rat)>=rat)
        {
            b = mid;
        }
        else
            e = mid;
    }
    cout << fixed<<b<<setprecision(10);
}