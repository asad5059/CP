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
    string s;
    cin>>s;
    ll m,sz=s.size();
    cin>>m;
    int cnt[sz];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<m;i++)
    {
        ll x,p=0;
        cin>>x;
        cnt[x-1]++;
    }
    ll sum=0;
    for(int i=0;i<sz/2;i++)
    {
        sum+=cnt[i];
        if(sum%2)
        {
            ll des=sz-i-1;
            swap(s[i],s[des]);
        }
    }
    cout<<s;
}