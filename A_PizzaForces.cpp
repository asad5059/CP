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
        ll n;
        cin >> n;
        ll ans = 0;
        if (n <= 6)
            ans = 15;
        else
        {
            ans = (n + (n % 2)) / 2 * 5;
        }

        cout << ans << ' ';



        
        ll s,S;
        s = n/6;
        S = n%6;
        if(n<=6)
        {
            cout << 15 << endl;
        }
        else if(S==0)
        {
            cout << s*15 << endl;
        }
        else if(6+S>10)
        {
            cout << ((n/6)+1)*15 << endl;
        }
        else if(6+S>8)
        {
            cout << (((n/6)-1)*15)+(25) << endl;
        }
        else if(6+S<=8)
        {
            cout << (((n/6)-1)*15)+(20) << endl;
        }
    }
}