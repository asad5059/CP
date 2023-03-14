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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2!=0)
        {
            if(n==3)
            {
                cout<<"3 1 2\n";
                continue;
            }
            else
            {
                cout<<"3 1 2 ";
                int pre=5;
                for(int i=4;i<=n;i++)
                {
                    if(i%2==0){
                    cout<<pre<<" ";
                    pre+=2;}
                    else
                    {
                        cout<<i-1<<" ";
                    }
                }
                cout<<"\n";
            }
        }
        else
        {
            cout<<"2 1 ";
            for(int i=3;i<=n;i++)
            {
                if(i%2!=0)
                {
                    cout<<i+1<<" ";
                }
                else
                {
                    cout<<i-1<<" ";
                }
            }
            cout<<"\n";
        }
    }
}