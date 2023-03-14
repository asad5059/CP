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
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
                if(a[i][j-1]=='P' && j-1>=0)
                {
                    cnt++;
                    // cout<<i<<" "<<j-1<<"\n";
                    a[i][j-1]='.';
                }
                else if(a[i][j+1]=='P' && j+1<m)
                {
                    cnt++;
                    a[i][j+1]='.';
                    // cout<<i<<" "<<j+1<<"\n";

                }
                else if(a[i-1][j]=='P'  && i-1>=0)
                {
                    cnt++;
                    a[i-1][j]='.';
                    // cout<<i+1<<" "<<j<<"\n";

                }
                else if(a[i+1][j]=='P' && i+1<n)
                {
                    cnt++;
                    a[i+1][j]='.';
                }
            }
        }
    }
    cout<<cnt;
}