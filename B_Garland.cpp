#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
int main()
{
    fastio();
    string a,b;
    cin>>a>>b;
    map<char,ll> mp;
    for(auto i:a) mp[i]++;
    ll cnt=0;
    for(auto i:b)
    {
        if(mp.find(i)==mp.end())
        {
            cout<<-1;
            return 0;
        }
    }
    for(auto i:b)
    {
        if(mp[i]>0)
        {
            mp[i]--;
            cnt++;
        }
    }
    cout<<cnt;

}