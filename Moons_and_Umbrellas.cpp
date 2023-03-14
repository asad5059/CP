#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll cj, jc,n,cnt=0;
map <string,ll> dp;
ll cal(string s,ll pos)
{
    cnt++;
    if (pos == n - 1)
    {
        ll ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == 'C' && s[i] == 'J')
                ans += cj;
            else if (s[i - 1] == 'J' && s[i] == 'C')
                ans += jc;
        }
        // cout<<ans<<endl;
        return ans;
    }
    if(dp[s])
    return dp[s];
    else
    dp.erase(s);
    ll k=INT_MAX,h=INT_MAX, p=INT_MAX;
    if (s[pos] == '?')
    {
        s[pos] = 'C';
        k = cal(s, pos + 1);
        s[pos] = 'J';
        h=cal(s,pos+1);
    }
    else{
        p=cal(s,pos+1);
    }
    return dp[s]=min(min(k,h),p);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        dp.clear();
        string s;
        cin >> cj >> jc;
        cin >> s;
        n = s.size();
        ll ans = cal(s, 0);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
}