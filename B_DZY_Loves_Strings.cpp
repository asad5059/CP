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
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    string s;
    cin>>s;
    ll k,mx=0;
    cin>>k;
    map <char,ll> mp;
    char c='a';
    for(int i=0;i<26;i++)
    {
        ll x;
        cin>>x;
        mp[c++]=x;
        mx=max(x,mx);
    }
    ll sc=0;
    for(int i=1;i<=s.size()+k;i++)
    {
        if(i<=s.size())
        sc+=i*mp[s[i-1]];
        else
        sc+=i*mx;
    }
    cout<<sc;
}