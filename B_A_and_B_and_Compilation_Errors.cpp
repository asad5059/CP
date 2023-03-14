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
    vector<ll> v[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            ll x;
            cin>>x;
            v[i].pb(x);
        }
        sort(v[i].begin(),v[i].end());
        // for(auto j:v[i])
        // cout<<j<<" ";
        // cout<<"\n";
    }
    ll num1,num2;
    bool f=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[0][i]!=v[1][i])
        {
            f=1;
            num1=v[0][i];
            break;
        }
    }
    if(!f) num1=v[0][n-1];
    f=0;
    for(int i=0;i<n-2;i++)
    {
        if(v[1][i]!=v[2][i])
        {
            f=1;
            num2=v[1][i];
            break;
        }
    }
    if(!f) num2=v[1][n-2];
    cout<<num1<<"\n"<<num2;
    
}