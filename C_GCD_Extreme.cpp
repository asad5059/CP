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
const ll sz=1000002;
ll phi[sz];
ll res[sz],sum[sz];
void f()
{
    for(int i=1;i<sz;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<sz;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<sz;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}
void f1()
{
    for(int i=1;i<sz;i++)
    {
        for(int j=i;j<sz;j+=i)
        {
            res[j]+=phi[j/i]*i;
        }
    }
    for(int i=1;i<sz;i++) res[i]-=i;
    sum[0]=res[0]=0;
    for(int i=1;i<sz;i++)
    {
        sum[i]=res[i]+sum[i-1];
    }
}
int main()
{
    fastio();
    f();
    f1();
    ll n;
    while(cin>>n && n)
    {
        cout<<sum[n]<<"\n";
    }
}