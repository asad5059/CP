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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector <ll> a,b;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        ll i=0,j=0;        
        while(k--)
        {
            if(a[i]<b[j])
            {
                a[i]=b[j];
                j++;
            }
            i++;
        }
        ll sum=0;
        for(auto i:a)
        sum+=i;
        cout<<sum<<'\n';
    }
}