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
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string s,s2;
        cin >> s;
        set<char> st;
        queue <ll> v;

        while (m > 0 && st.size() != 1)
        {
            st.clear();
            for (int i = 0; i < n;i++)
            {
                if(s[i]=='0' && (s[i-1]=='1' || s[i+1]=='1') && (s[i-1]!=s[i+1]) )
                {
                    v.push(i);
                }
            }
            while(!v.empty())
            {
                ll pos=v.front();
                s[pos]='1';
                v.pop();
            }
            m--;
            if(s2==s) break;
            s2=s;
            for (int i = 0; i < n; i++)
            {
                st.insert(s[i]);
            }
            // m--;
        }
        cout << s << "\n";
    }
}