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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        vector<ll> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int j=0;
        while(1)
        {
            bool f=1;
            for(int i=0;i<n-1;i++)
            {
                if(v1[i]>v1[i+1])
                {
                    f=0;
                    break;
                }
            }
            if(f) break;
            if(j%2==0)
            {
                for(int i=0;i<n-1;i+=2)
                {
                    if(v1[i]>v1[i+1])
                    {
                        swap(v1[i],v1[i+1]);
                    }
                }
            }
            else
            {
                for(int i=1;i<n-1;i+=2)
                {
                    if(v1[i]>v1[i+1])
                    {
                        swap(v1[i],v1[i+1]);
                    }
                }
            }
            j++;
        }
        cout<<j<<"\n";
    }
}