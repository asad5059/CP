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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int s0=0,s1=0;
    n/=2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            cout<<"NO\n";
            return 0;
        }
        else if(i<=n-1)
        {
            s0+=s[i]-'0';
        }
        else
        {
            s1+=s[i]-'0';
        }
    }
    // cout<<s0<<" "<<s1;
    if(s1==s0)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}