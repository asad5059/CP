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
deque<int> v1, v2;
int n,cun=0;
int d1[]={0,0,1,-1};
int d2[]={1,-1,0,0};
bool vis[2][101];
bool ok(string a,string b)
{
    bool f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='#' && a[i]==b[i])
        return 1;
    }
    return 0;
}
int main()
{
    fastio();
    string s1, s2, t1, t2;
    cin >> s1 >> s2;
    map<ll, ll> mp;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '#')
            v1.pb(i), cun++;
        if (s2[i] == '#')
            v2.pb(i), cun++;
    }
    if (v1 == v2 || v1.size()+v2.size()==1)
    {
        cout << "YES\n";
        cout << s1 << "\n"
             << s2;
        return 0;
    }
    t1 = s1;
    t2 = s2;
    for (int i = 0; i<v1.size(); i++)
    {
        int x = v1[i];
        while (t1[x + 1] == '.')
        {
            x++;
        }
        swap(t1[v1[i]], t1[x]);
        
    }
    for (int i = 0; i<v1.size(); i++)
    {
        int x = v2[i];
        while (t2[x + 1] == '.')
        {
            x++;
        }
        swap(t2[v2[i]], t2[x]);
    }
    if(ok(t1,t2))
    {
        cout<<"YES\n"<<t1<<"\n"<<t2<<"\n";
        return 0;
    }
    t1 = s1;
    t2 = s2;
    for (int i = v1.size()-1; i>=0; i--)
    {
        int x = v1[i];
        if(x-1!=v1[i-1]){
        while (t1[x + 1] == '.')
        {
            x++;
        }
        swap(t1[v1[i]], t1[x]);}
    }
    for (int i = v2.size()-1; i>=0; i--)
    {
        int x = v2[i];
        if(x-1!=v2[i-1]){
        while (t2[x + 1] == '.')
        {
            x++;
        }
        swap(t2[v2[i]], t2[x]);}
    }
    if(ok(t1,t2))
    {
        cout<<"YES\n"<<t1<<"\n"<<t2<<"\n";
        return 0;
    }
}