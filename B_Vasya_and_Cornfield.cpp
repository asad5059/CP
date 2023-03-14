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
int main()
{
    fastio();
    ll n, d;
    cin >> n >> d;
    pair<int, int> p1, p2, p3, p4, pk;
    p1 = {0, d}, p2 = {d, 0}, p3 = {n, n - d}, p4 = {n - d, n};
    set<pair<int, int>> edge,b1,b2,b3,b4;
    int x = p1.ff, y = p1.ss;
    while (x != p2.first && y != p2.ss)
    {
        edge.insert({x, y});
        x++, y--;
    }
    x = p2.ff, y = p2.ss;
    while (x != p3.first && y != p3.ss)
    {
        edge.insert({x, y});
        x++, y++;
    }
    x = p3.ff, y = p3.ss;
    while (x != p4.first && y != p4.ss)
    {
        edge.insert({x, y});
        if(x!=p3.first && y!=p3.ss)
        b3.insert({x,y});
        x--, y++;
    }
    x = p4.ff, y = p4.ss;
    while (x != p1.first && y != p1.ss)
    {
        edge.insert({x, y});
        if(x!=p4.first && y!=p4.ss)
        b3.insert({x,y});
        x--, y--;
    }
    ll poka;
    cin >> poka;
    while (poka--)
    {
        cin >> pk.first >> pk.ss;
        if (edge.find(pk) != edge.end())
        {
            cout << "YES\n";
            continue;
        }
        bool f[4]={0};
        x=pk.first,y=pk.second;
        for(int i=1;i<100;i++)
        {
            x++;
            if(edge.find({x,y})!=edge.end())
            {
                f[0]=1;
                break;
            }
        }
        x=pk.first;
        for(int i=1;i<100;i++)
        {
            x--;
            if(edge.find({x,y})!=edge.end())
            {
                f[1]=1;
                break;
            }
        }
        x=pk.first,y=pk.second;
        for(int i=1;i<100;i++)
        {
            y++;
            if(edge.find({x,y})!=edge.end())
            {
                f[2]=1;
                break;
            }
        }
         x=pk.first,y=pk.second;
        for(int i=1;i<100;i++)
        {
            y--;
            if(edge.find({x,y})!=edge.end())
            {
                f[3]=1;
                break;
            }
        }
        if(f[0] && f[1] && f[2] && f[3])
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}