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
    deque <ll> d;
    if(n%2!=0)
    cout<<-1;
    else
    {
        int j=1;
        for(int i=n;i>=1;i--)
        {
            if(j-1==i)
            {
                d.push_front(i);
            }
            else
            {
                d.push_back(i);
            }
            j=d.size();
        }
        for(auto i:d)
        cout<<i<<" ";
    }
}