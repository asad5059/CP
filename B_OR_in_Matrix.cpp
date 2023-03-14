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
    ll n, m;
    cin >> n >> m;
    int a[n][m], ans[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    set <ll> r,c;
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < n; i++)
    {
        ll k = 0;
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]>0)
            k++;
        }
        if(k==m)
        r.insert(i);
    }
    for(int j=0;j<m;j++)
    {
        ll k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i][j]>0) k++;
        }
        if(k==n)
        c.insert(j);
    }
    // for(auto i:r)
    // cout<<i<<" ";
    // cout<<"\n";
    // for(auto j:c)
    // cout<<j<<" ";
    // cout<<"\n";
    ll cnt=0,cnt2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                cnt++;
                bool f1=0,f2=0;
                if(r.find(i)!=r.end())
                {
                    f1=1;
                }
                if(c.find(j)!=c.end())
                {
                    f2=1;
                }
                if(f1 && f2)
                {
                    ans[i][j]=1;
                    cnt2++;
                }
                if(f1==0 && f2==0)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    if(cnt2==0 && cnt>0)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}