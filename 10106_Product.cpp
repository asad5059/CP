#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;

ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }
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
string add(string a, string b)
{
    if (a.size() < b.size())
        swap(a, b);
    string x(a.size()-b.size(),'0'); b=x+b;
    string an="";
    ll carry=0,d1,d2,sum;
    for(int i=a.size()-1;i>=0;i--)
    {
        d1=a[i]-'0', d2=b[i]-'0';
        sum=d1+d2+carry;
        ll r=sum%10;
        an.push_back(r+'0');
        carry=sum/10;
    }
    if(carry>0) an.push_back(carry+'0');
    reverse(an.begin(),an.end());
    return an;
}
int main()
{
    fastio();
    string a, b;
    while (cin >> a >> b)
    {
        if (b.size() > a.size())
            swap(a, b);
        string s[a.size()];
        ll carry = 0, d1, d2, cnt = 0, mul;
        for (int j = b.size() - 1; j >= 0; j--)
        {
            deque<int> q;
            for (int i = a.size() - 1; i >= 0; i--)
            {
                d2 = b[j] - '0', d1 = a[i] - '0';
                mul = d1 * d2;
                mul += carry;
                q.push_front(mul % 10);
                carry = (mul / 10);
            }
            if (carry > 0)
            {
                q.push_front(carry);
            }
            carry=0;
            int l = 0;
            for (int l = 0; l < cnt; l++)
            {
                q.push_back(0);
            }
            for (auto k : q)
            {
                s[cnt] += (k + '0');
            }
            cnt++;
        }
        string ans = "0";
        for (int i = 0; i < cnt; i++)
        {
            ans = add(ans, s[i]);
        }
        int i=0,n=ans.size();
        bool f=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!='0' || i==n-1) f=1;
            if(f) cout<<ans[i];
        }
        cout<<"\n";
    }
}

//  12
// *12
// ----
//  24
// 120
// ----
// 144