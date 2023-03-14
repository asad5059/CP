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
string a, b;
bool eq(string x, string y)
{
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    return x == y;
}
ll onukul=0;
void f(string x,ll pos)
{
    if(pos>=x.size())
    {
        sort(x.begin(),x.end());
        if(x==a)
        {
            onukul++;
        }
        return;
    }
    if(x[pos]!='?')
    f(x,pos+1);
    else
    {
        x[pos]='+';
        f(x,pos+1);
        x[pos]='-';
        f(x,pos+1);
    }
}
int main()
{
    fastio();
    cin >> a >> b;
    if (eq(a, b))
    {
        cout << 1;
        return 0;
    }
    ll p1 = 0, p2 = 0, n1 = 0, n2 = 0, q = 0;
    for (auto i : a)
    {
        if (i == '+')
            p1++;
        else
            n1++;
    }
    for (auto i : b)
    {
        if (i == '+')
            p2++;
        else if (i == '?')
            q++;
        else
            n2++;
    }
    if (p2 > p1 || n2 > n1)
    {
        cout << 0;
        return 0;
    }
    sort(a.begin(),a.end());
    double ans = pow(2, q);
    f(b,0);
    ans=onukul/ans;
    printf("%.12lf",ans);
}