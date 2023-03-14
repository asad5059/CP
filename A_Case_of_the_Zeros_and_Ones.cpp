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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack <char> st;
    st.push(s[0]);
    for(int i=1;i<n;i++)
    {
        if(st.size()==0)
        {
            st.push(s[i]);
        }
        else if(s[i]==st.top())
        {
            st.push(s[i]);
        }
        else if(st.top()!=s[i])
        {
            st.pop();
        }
    }
    cout<<st.size();
}