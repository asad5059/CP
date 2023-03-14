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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s, s2;
        cin >> s;
        s2 = s;
        map<char, int> mp;
        vector <ll> v;
        for (auto i : s)
            mp[i]++;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='?')
            {
                v.pb(i);
            }
        }
        if(mp['?']==n)
        for(int i=0;i<n;i+=2)
        s[i]='B', s[i+1]='R';
        else
        for(int i=0;i<v.size();i++)
        {
            ll x=v[i]-1;
            while(x>=0 && s[x]=='?')
            {
                if(s[x+1]=='B')
                s[x]='R';
                else
                s[x]='B';
                x--;
            }
            x=v[i]+1;
            while(x<n && s[x]=='?')
            {
                if(s[x-1]=='B')
                s[x]='R';
                else
                s[x]='B';
                x++;
            }
        }
        cout << s << "\n";
    }
}