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
struct s
{
    ll id;
    double sc, x, y;
};
bool cmp(s p1,s p2)
{
    if(p1.sc!=p2.sc)
    {
        if(p1.sc>p2.sc) return 1;
        else return 0;
    }
    if(p1.sc==p2.sc)
    {
        if(p1.id<p2.id)
        return 1;
        else
        return 0;
    }
}
int main()
{
    fastio();
    ll n;
    double t1,t2,k;
    cin >> n >> t1 >> t2 >> k;
    vector<s> v;
    k/=100.0;
    for (int i = 1; i <= n; i++)
    {
        double x, y,r;
        cin >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        // cout << k << "\n";
        double sc = max(((x-(x * k)) * t1) + (y * t2),(x * t2) + ((y-(y * k)) *t1));
        // cout<<sc<<" "<<sc2<<"\n";
        v.pb({i,sc, x, y});
    }
    sort(v.begin(),v.end(),cmp);
    for (auto i : v)
    {
        cout << i.id << " " << setprecision(2)<<fixed<< i.sc << "\n";
    }
}