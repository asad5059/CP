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
    string s;
    bool f = 0;
    cin >> s;
    ll n = s.size(), cnt = 0;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2' && f == 0)
            f = 1;
        if (f)
        {
            if (s[i] == '2' || s[i] == '0')
            {
                ans += s[i];
                mp[s[i]]--;
            }
        }
        if (f && s[i] == '1')
            cnt++;
    }
    while (cnt--)
    {
        ans = '1' + ans;
        mp['1']--;
    }
    cnt=mp['1'];
    while(cnt--)
    ans='1'+ans;
    cnt=mp['0'];
    while(cnt--)
    ans='0'+ans;
    if(ans=="") ans=s;
    cout << ans;
}
//11222121
//11122122