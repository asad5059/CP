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
string f(string s)
{
    bool a[27];
    memset(a,0,sizeof(a));
    for(auto i:s) a[i-'A']=1;
    vector <char> x;
    for(int i='A';i<='Z';i++)
    {
        if(a[i-'A']!=1)
        {
            x.pb((char)i);
        }
    }
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?')
        s[i]=x[j++];
    }
    if(j<x.size())
    s="-1";
    return s;
}
int main()
{
    fastio();
    string s;
    cin >> s;
    if (s.size() < 26)
        cout << -1;
    else
    {
        for (int i = 0; i < s.size() - 26 + 1; i++)
        {
            string an = s.substr(i, 26),ans=f(an);
            if (ans!="-1")
            {
                for(int j=0;j<i;j++)
                {
                    if(s[j]=='?') s[j]='A';
                    cout<<s[j];
                }
                cout<<ans;
                for(int j=i+26;j<s.size();j++)
                {
                    if(s[j]=='?') s[j]='A';
                    cout<<s[j];
                }
                return 0;
            }
        }
        cout<<-1;
    }
}