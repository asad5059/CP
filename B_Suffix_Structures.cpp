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
    string s,t;
    cin>>s>>t;
    map <char,int> m1,m2;
    for(auto i:s)
    m1[i]++;
    for(auto i:t)
    m2[i]++;
    bool autom=1,ar=1;
    for(int i=0;i<t.size();i++)
    {
        if(m1[t[i]]<m2[t[i]] || s.size()<t.size())
        {
            cout<<"need tree";
            return 0;
        }
    }
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        j++;
    }
    if(j==t.size())
    {
        cout<<"automaton";
        return 0;
    }
    if(m1==m2 && s!=t)
    {
        cout<<"array";
        return 0;
    }
    
    cout<<"both";
    

    
}