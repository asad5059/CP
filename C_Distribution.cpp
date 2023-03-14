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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
struct s
{
    ll id,x,y;
};
bool f(s p1, s p2)
{
    if(p1.y<=p2.y)
    return 1;
    else
    return 0;
}
int main()
{
    fastio();
    ll n;
    cin >> n;
    vector<s> v(n),v2(n);
    ll csum[n];
    memset(csum,0,sizeof(csum));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x;
        v[i].id=i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].y;
    }
    v2=v;
    sort(v.begin(),v.end(),f);
    // for(auto i:v)
    // cout<<i.id<<" "<<i.x<<" "<<i.y<<"\n";
    ll p = 0,ans[n],flag[n];
    memset(ans,0,sizeof(ans));
    memset(flag,0,sizeof(flag));
    for(int i=v[0].id;i<n;i++)
    {
        flag[i]++;
        if(flag[i]==2) break;
        if(i==v[0].id)
        {
            ans[i]=v2[i].y;
            p+=v2[i].y+v2[i].x;
        }
        else
        {
            ans[i]=min(p,v2[i].y);
            p+=v2[i].x;
        }
        if(i==n-1) i=0;
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<"\n";
}