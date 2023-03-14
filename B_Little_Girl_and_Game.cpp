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
    map <char,int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    if(mp.size()==1)
    {
        cout<<"First";
        return 0;
    }
    int e=0,o=0,f=0;
    for(auto i:mp)
    {
        if(i.ss%2) o+=i.ss, f=1;
        else e+=i.ss;
    }
    if(!f)
    {
        cout<<"First";
        return 0;
    }
    // cout<<e<<" "<<o;
    if(e%2==0  && o%2)
    {
        cout<<"First";
        return 0;
    }
    else
    cout<<"Second";
}