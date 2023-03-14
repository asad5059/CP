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
    ll n,x,y;
    cin>>n>>x>>y;
    if(fix_mod(y,n)==0 || y<=0)
    cout<<-1;
    else if(x==0 && y==0)
    cout<<-1;
    else
    {
        if(fix_mod(x,n)==0 && fix_mod(y,n)==0)
        {
            cout<<-1;
        }
        else
        {
            double p=y/(double)n;
            double q=n/2.0;

            if(p<=2.000)
            {
                if(abs(x)>=q)
                cout<<-1;
                else
                {
                    cout<<max((ll)ceil(p),1LL);
                }
            }
            else
            {
                ll k=ceil(p),cnt=0;
                for(int i=3;i<=k;i++)
                {
                    if(i%2) cnt++;
                }
                if(k%2==0)
                {
                    if(abs(x)>=q)
                    {
                        cout<<-1;
                        return 0;
                    }
                }
                else
                {
                    if(abs(x)>=n || x==0)
                    {
                        cout<<-1;
                        return 0;
                    }
                }
                p+=cnt;
                if(x<0 && k%2)
                cout<<max((ll)ceil(p)-1,1LL);
                else
                cout<<max((ll)ceil(p),1LL);
            }

        }
    }
}