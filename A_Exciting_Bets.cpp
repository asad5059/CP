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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        cout<<0<<" "<<0<<"\n";
        else
        {
            cout<<abs(a-b);
            ll q=abs(a-b);
            ll n1=q,n2=q;
            int i=2;
            while(n1<a)
            {
                n1=q*i;
                i++;
            }
            n2=abs(n1-q-a);
            n1-=a;
            n1=abs(n1);
            cout<<" "<<min(n1,n2)<<"\n";
        }
    }
}