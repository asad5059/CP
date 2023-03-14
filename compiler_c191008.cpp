#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    string s,t,pre,fst,lst;
    getline(cin,s);
    stringstream ss(s);
    bool f=0;
    while(ss>>t)
    {
        if(t=="=")
        {
            ss>>t;
            if(pre==t)
            {
                f=1;
                break;
            }
        }
        pre=t;
    }
    bool f1=0;
    stringstream ss2(s);
    while(ss2>>t)
    {
        if(t=="+" || t=="-" || t=="*" || t=="/")
        {
            ss2>>t;
            if(pre==t)
            {
                f1=1;
                break;
            }
        }
        pre=t;
    }
    if(f && f1)
    cout<<"Both";
    else if(f && !f1)
    cout<<"Left Linear";
    else if(f1 && !f)
    cout<<"Right Linear";
    else
    cout<<"Not defined";

}