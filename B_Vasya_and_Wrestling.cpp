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
    ll a[n],p1=0,p2=0;
    vector <ll> v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0) p1+=a[i], v1.push_back(a[i]);
        else p2+=-1*a[i], v2.push_back(-1*a[i]);
    }
    if(p1!=p2)
    {
        if(p1>p2) cout<<"first";
        else cout<<"second";
        return 0;
    }
    if(v1!=v2)
    {
        ll sz=min(v1.size(),v2.size());
        for(int i=0;i<sz;i++)
        {
            if(v1[i]>v2[i])
            {
                cout<<"first";
                return 0;
            }
            if(v1[i]<v2[i])
            {
                cout<<"second";
                return 0;
            }
        }
        if(v1.size()>v2.size())
        {
            cout<<"first";
        }
        else
        cout<<"second";
        return 0;
    }
    else
    {
        if(a[n-1]>0)
        cout<<"first";
        else
        cout<<"second";
    }


}