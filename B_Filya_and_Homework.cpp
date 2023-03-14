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
    set <ll> s,s2;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x; s.insert(x);
    }
    bool f=1;
    auto it=s.begin();
    it++;
    if(s.size()<=2)
    {
        cout<<"YES";
    }
    else if(s.size()>3) cout<<"NO";
    else if(s.size()==3)
    {
        for(auto i:s)
        {
            if(i==*it)
            continue;
            else
            s2.insert(abs(*it-i));
        }
        if(s2.size()==1)
        cout<<"YES";
        else 
        cout<<"NO";
        
    }
}