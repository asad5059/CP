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
bool cmp(pair<ll,ll> p1, pair<ll,ll> p2)
{
    if(p1.ff<p2.ff)
    return 1;
    if(p1.ff==p2.ff)
    {
        return p2.ss>p1.ss;
    }
    return 0;
}
int main()
{
    fastio();
    ll n,m,k,t,x,y;
    cin>>n>>m>>k>>t;
    vector<pair<ll,ll>> kPoints;
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        kPoints.push_back({x,y});
    }
    sort(kPoints.begin(),kPoints.end(),cmp);
    // for(auto i:kPoints)
    // cout<<i.ff<<" "<<i.ss<<"\n";
    while(t--)
    {
        cin>>x>>y;
        ll cnt=0;
        bool f=0;
        pair<ll,ll> p;
        p={x,y};
        ll pos=1;
        for(auto i:kPoints)
        {
            if(i==p)
            {
                cout<<"Waste\n";
                f=1;
                break;
            }
            if(x>i.ff)
            {
                pos++;
                continue;
            }
            else
            {
                if(x==i.ff && y>i.ss)
                {
                    pos++;
                    continue;
                }
                else
                break;

            }
        }
        if(f)
        continue;
        // cout<<x<<" "<<y<<" "<<pos<<"\n";
        cnt=(x-1)*m+y;
        ll p2=cnt%3;
        p2=p2-pos;
        p2=fix_mod(p2,3);
        if(p2==2)
        cout<<"Grapes\n";
        else if(p2==0)
        cout<<"Carrots\n";
        else
        cout<<"Kiwis\n";

    }
}