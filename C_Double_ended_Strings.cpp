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
vector <string> ans;

bool ok(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i < N; i++)
    {
        if (s1[0] == s2[i])
        {
            string f = s2.substr(i, M);
            if (f == s1)
                return 1;
        }
    }
    return 0;
}
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            ans.pb(s.substr(i, len));
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        string a, b;
        cin >> a >> b;
        if (a.size() < b.size())
            swap(a, b);
        ll mx = 0, ch = 1;
        subString(b,b.size());
        for(auto i:ans)
        {
            if(ok(i,a))
            {
                mx=max(mx,(ll)i.size());
            }
        }
        cout<<a.size()+b.size() -2*mx<<endl;
    }
}