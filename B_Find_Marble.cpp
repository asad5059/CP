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
    ll n,s,t,pos=0;
    cin>>n>>s>>t;
    ll a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==s)
        pos=a[i];
    }
    if(s==t)
    {
        cout<<0;
        return 0;
    }
    ll cur=s,copy;
    pos=s;
    ll cnt=0;
    while(cnt<2e5)
    {
        if(cur==t)
        {
            cout<<cnt-1;
            return 0;
        }
        // cout<<cur<<"\n";
        cur=pos;   // 7 2
        pos=a[cur]; //2 6
        cnt++;
    }
    cout<<-1;
}

//      .
//  1 2 3 4 5 6 7 8 9  10
//              .
//  8 7 4 6 1 2 3 5 10  9
//    .
//  5 3 6 2 8 7 4 1  9  10
//            .
//  1 4 2 7 5 3 6 8 10  9