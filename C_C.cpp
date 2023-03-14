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
struct st
{
    ll a,b,c;
};

bool f(st v1,st v2)
{
    ll s1=v1.a+v1.b+v1.c,s2=v2.a+v2.b+v2.c;
    return s1<=s2;
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
        ll ans=0;
        vector <ll> v;
        for(int i=0;i<n;i++)
        {
            ll ar[3];
            cin>>ar[0]>>ar[1]>>ar[2];
            sort(ar,ar+3);
            v.pb(ar[0]);
            v.pb(ar[1]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
        ans+=v[i];
        cout<<ans<<"\n";

    }
}