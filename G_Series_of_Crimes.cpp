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
    ll n,m,p1=0,p2=0;
    map<int,int> mp,mp2;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                mp[i]++;
                mp2[j]++;

            }
        }
    }
    for(auto i:mp)
    {
        if(i.ss==1)
        {
            p1=i.ff;
        }
    }
    for(auto i:mp2)
    {
        if(i.ss==1)
        {
            p2=i.ff;
        }
    }
    cout<<p1<<" "<<p2<<"\n";
    

}