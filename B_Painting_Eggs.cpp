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
    ll n,x,y,s1=0,s2=0,c1=0,c2=0;
    cin>>n;
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.pb({x,y});
        s1+=x;
        s2+=y;
    }
    string ans="";
    int k=0;
    for(auto i:v)
    {
        if(abs(c1+i.ff-c2)<=500)
        {
            c1+=i.ff;
            ans+='A';
        }
        else
        {
            c2+=i.ss;
            ans+='G';
        }
    }
    if(abs(c1-c2)<=500)
    {
        cout<<ans;
        return 0;
    }
    else
    {
        cout<<-1;
    }

}