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
    ll n,x=0;
    double ans = 3.1415926536;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    if (n % 2)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                x+=v[i]*v[i];
            }
            else
            {
                x-=v[i]*v[i];
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%2)
            {
                x+=v[i]*v[i];
            }
            else
            {
                x-=v[i]*v[i];
            }
        }
    }
    ans*=x;
    cout<<fixed<<setprecision(10)<<ans;
}