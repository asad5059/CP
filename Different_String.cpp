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
ll n;
map<string,int> mp;
string ans="";
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s]++;
        }
        string mi;
        ll mii=1e18;
        for(auto i:mp)
        {
            if(i.ss<mii)
            {
                mi=i.ff;
                mii=i.ss;
            }
        }
        string k;
        for(int i=0;i<mi.size();i++)
        {
            if(mi[i]=='0')
            {
                k=mi;
                k[i]='1';
            }
            else
            {
                k=mi;
                k[i]='0';   
            }
            if(mp.find(k)==mp.end())
            break;
        }
        cout<<k<<"\n";
    }
}