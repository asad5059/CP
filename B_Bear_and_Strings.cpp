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
    string s,s2="bear";
    cin>>s;
    bool f=0;
    vector <ll> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='b')
        {
            string k=s.substr(i,4);
            if(k==s2)
            {
                f=1;
                v.pb(i);
            }
        }
    }
    if(!f)
    {
        cout<<0;
        return 0;
    }
    ll ans=0,n=s.size()-1,j=0,p=0;
    for(int i=0;i<=v[v.size()-1];i++)
    {
        if(i>v[j]) j++;
        for(int k=0;k<=v[v.size()-1];k++)
        {
            if(k==v[j])
            {
                ll e=k+3;
                ans+=(n-e)+1;
                break;
            }
        }
    }
    cout<<ans;

}