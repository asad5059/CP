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
int n;
bool f(string str)
{
    stack<char> st;
    int o=0,c=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='(')
        o++;
        else
        c++;

        if (st.empty())
        {
            st.push(str[i]);
        }
        else if(st.top()==str[i])
        st.push(str[i]);
        else
            st.pop();
    }
    if(st.size() == 0 && o==c)
    return 1;
    else
    return 0;
}
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2;
        cin >> s;
        s2 = s;
        n = s.size();
        map<char,char> mp;
        mp[s[0]]='(';
        mp[s[n-1]]=')';
        mp['a']='(';
        mp['b']=')';
        if (s[0] == s[n - 1])
        {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                s[i]=mp['a'];
            }
            else
            s[i]=mp[s[i]];
        }
        // cout<<s<<" ";
        if (f(s))
        {
            cout << "YES\n";
            continue;
        }
        s = s2;
        for (int i = 0; i < n; i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                s[i]=mp['b'];
            }
            else
            s[i]=mp[s[i]];
        }
        // cout<<s<<" \n";
        if (f(s))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}