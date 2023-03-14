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
ll m = 1000003;
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
ll f(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n%2)
        {
            res=(res*a)%m;
            n--;
        }
        else
        {
            n/=2;
            a=(a*a)%m;
        }
    }
    return res;
}
int main()
{
    fastio();
    map<char, string> mp;
    mp['>'] = "1000";
    mp['<'] = "1001";
    mp['+'] = "1010";
    mp['-'] = "1011";
    mp['.'] = "1100";
    mp[','] = "1101";
    mp['['] = "1110";
    mp[']'] = "1111";
    string s, k = "";
    cin >> s;
    ll p = 0;
    for (auto i : s)
    {
        k += mp[i];
    }
    int j=0;
    ll ans=0;
    for(int i=k.size()-1;i>=0;i--)
    {
        if(k[i]=='1')
        {
            ans+=f(2,j);
        }
        j++;
    }
    cout<<ans%m;
}