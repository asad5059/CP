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
    string s, s2;
    cin >> s;
    s2 = s;
    reverse(s2.begin(), s2.end());
    int k = -1;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] >= '1' && s2[i] <= '9')
        {
            k = 1;
        }
        if (k == 1)
            cout << s2[i];
    }
    cout<<"\n";
    if (s == s2)
        cout << "YES";
    else
        cout << "NO";
}