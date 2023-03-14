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
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

}
int main()
{
    fastio();
    vector<ll> v;
    ll k=5,p=2;
    v.pb(2);
    while(p<2*1e9)
    {
        p=p+k;
        k+=3;
        v.pb(p);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        while(n>=2)
        {
            ll l=-1,r=v.size(),mid;
            while(l+1<r)
            {
                mid=(l+r)/2;
                if(v[mid]<=n)
                {
                    l=mid;
                }
                else
                {
                    r=mid;
                }
            }
            ll pos=l;
            n=n-v[pos];
            cnt++;
            // cout<<n<<" "<<pos<<"\n";
        }
        cout<<cnt<<"\n";
    }
}