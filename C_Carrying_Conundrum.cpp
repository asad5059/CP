#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        string s,a="",b="";
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(i%2)
            {
                b+=s[i];
            }
            else
            {
                a+=s[i];
            }
        }
        ll x=0,y=0;
        if(a.size()>0) x=stol(a);
        if(b.size()>0) y=stol(b);
        ll op_x=x+1,op_y=y+1;
        cout<<op_x*op_y-2<<"\n";

    }
}