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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll toint(string s)
{
    ll r = 0, p = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        r += p * (s[i] - '0');
        p *= 10;
    }
    return r;
}
ll f(ll n, ll cnt)
{
    double x = log2(n);
    ll y = x;
    if (x == y)
        return cnt;
    ll ans=1e18;
    ll d=n*10;
    for(int i=2;i<=8;i+=2)
    {
        ans=min(f(d+i,cnt+1),ans);
    }
    // string k=to_string(n),q=k;
    // for(int i=0;i<k.size();i++)
    // {
    //     q.erase(i,1);
    //     d=toint(q);
    //     ans=min(ans,f(d,cnt+1));
    //     q=k;
    // }
    return ans;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n;
        s = to_string(n);
        double x = log2(n);
        ll y = x;
        if (x == y)
            cout << "0\n";
        else
        {
            cout<<f(n,0)<<"\n";
        }
    }
}