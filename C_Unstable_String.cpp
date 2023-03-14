#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
string s;
ll f()
{
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int len = 1; len <= s.size() - i; len++)
        {
            string s2 = s.substr(i, len);
            bool fl=1;
            for(int j=1;j<s2.size()-1;j++)
            {
                if(s2[j]==s2[j-1] || s2[j]==s2[j+1] || (s[j]=='?' && s2.size()>3 && ((s[j-1]=='0' && s[j+1]=='1' )||(s[j-1]=='1' && s[j+1]=='0'))))
                {
                    fl=0;
                    break;
                }
            }
            if(fl)
            {
                cnt++;
                // cout<<s2<<"\n";
            }
        }
    }
    return cnt;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << f() << "\n";
    }
}