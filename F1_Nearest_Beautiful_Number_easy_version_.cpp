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
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
set <ll> ans;
vector <ll> v1,v2;
void f(ll d,int i,int j)
{
    // cout<<d<<"\n";
    ans.insert(d);
    if(d>1e9)
    {
        return;
    }
    d*=10;
    if(!(d==0 && i==0))
    f(d+i,i,j);
    if(!(d==0 && j==0))
    f(d+j,i,j);
}
ll ok(ll n)
{
    set <ll> s;
    while(n)
    {
        s.insert(n%10);
        n/=10;
    }
    return s.size();
}
int main()
{
    fastio();
    for(int i=0;i<=9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(i!=j)
            f(0,i,j);
        }
    }
    for(auto i:ans)
    {
        if(ok(i)==1)
        v1.pb(i);
        else
        v2.pb(i);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        if(d==1)
        {
            auto i=lower_bound(v1.begin(),v1.end(),n);
            cout<<*i<<"\n";
        }
        else
        {
            auto i=lower_bound(v1.begin(),v1.end(),n);
            auto j=lower_bound(v2.begin(),v2.end(),n);
            cout<<min(*i,*j)<<"\n";
        }
    }
}