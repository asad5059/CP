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
string s1="",s2="";
ll dp[1001][1001];
ll f(int i,int j)
{
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==s1.size() || j==s1.size())
    {
        return 0;
    }
    ll x=0,y=0;
    if(s1[i]==s2[j])
    {
        x=max(x,1+f(i+1,j+1));
    }
    else
    {
        y=max(y,1+max(f(i+1,j),f(i,j+1)));
    }
    return dp[i][j]=max(x,y);
}
int main()
{
    fastio();
    char c;
    int k=0;
    memset(dp,-1,sizeof(dp));
    while(cin>>c)
    {
        if(c=='=')
        {
            cin.ignore();
            cin.ignore();
            while (cin>>c)
            {
                if(c=='\"')
                break;
                if(k==0)
                s1+=c;
                else
                s2+=c;
            }
            k=1;
            continue;
            
        }
    }
    // cout<<s1<<" "<<s2<<"\n";
    cout<<f(0,0);
}