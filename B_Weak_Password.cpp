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
    string s;
    cin>>s;
    set <char> k;
    bool f=1;
    for(int i=0;i<s.size();i++)
    {
        k.insert(s[i]);
        if(i>=0 && i<=2 && f)
        {
            if(s[i]=='9' && s[i+1]=='0')
            continue;
            if(s[i]+1==s[i+1])
            {
                f=1;
            }
            else
            {
                f=0;
                // cout<<i<<" ";
            }
        }
    }
    if(k.size()==1)
    cout<<"Weak";
    else if(f)
    cout<<"Weak";
    else
    cout<<"Strong";
}