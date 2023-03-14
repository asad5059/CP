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
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}
string s;
int cnt=0;
void f(string st, ll pos, ll x, ll y)
{
    if(cnt>0) return;
    if (pos == s.size())
    {
        if (isPalindrome(st) && cnt==0)
        {
            cout<<st<<endl,cnt++;
            return;
        }
    }
    if (st[pos] == '?')
    {
        if (x > 0)
        {
            st[pos]= '0';
            f(st, pos + 1, x - 1, y);
        }
        if (y > 0)
        {
            st[pos]= '1';
            f(st, pos + 1, x, y - 1);
        }
    }
    else
    {
        f(st, pos + 1, x, y);
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        map<char, ll> mp;
        cin >> a >> b >> s;
        string k="";
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        if (mp['0'] > a || mp['1'] > b)
            cout << -1 << endl;
        else
            f(s, 0, a - mp['0'], b - mp['1']);
        if(cnt==0) cout<<-1<<endl;
    }
}