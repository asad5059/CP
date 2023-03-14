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
int main()
{
    fastio();
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        map<char,int> mp1,mp2;
        ll sz=s.size(),l1,r1,l2,r2;
        if(sz%2==0)
        {
            l1=0;
            r1=(sz/2)-1;
            l2=r1+1;
            r2=sz-1;
        }
        else
        {
            l1=0;
            r1=sz/2 - 1;
            l2=r1+2;
            r2=sz-1;
        }
        for(int i=l1;i<=r1;i++)
        {
            mp1[s[i]]++;
        }
        for(int i=l2;i<=r2;i++)
        {
            mp2[s[i]]++;
        }
        if(mp1==mp2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }
}