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
    ll mx=-1e18,pos=0,mi=1e18,pos2=0;
    vector <ll> v,a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.pb(a[i]);
        mx=max(mx,a[i]);
        mi=min(mi,a[i]);
    }
    sort(v.begin(),v.end());
    if(a==v)
    {
        cout<<0;
        return 0;
    }
    bool fk=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==mx && a[i+1]==mi)
        {
            fk=1;
            pos=i+1;
            break;
        }
    }
    if(!fk)
    {
        cout<<-1;
        return 0;
    }
    v.clear();
    for(int i=pos;i<n;i++)
    {
        v.pb(a[i]);
    }
    for(int i=0;i<pos;i++)
    {
        v.pb(a[i]);
    }
    bool f=1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            f=0;
            break;
        }
    }

    if(!f)
    {
        cout<<-1;
        return 0;
    }
    cout<<n-pos;
}