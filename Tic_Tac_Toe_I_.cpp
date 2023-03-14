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
ll vis[4][4];
char a[4][4];
bool okrc(char c,int i,int j)
{
    if(a[i][1]==a[i][2] && a[i][3]==c && a[i][1]==c && a[i][2]==c)
    return 1;
    if(a[1][j]==a[2][j] && a[3][j]==c && a[1][j]==c && a[2][j]==c)
    return 1;
    return 0;
}
bool okdia(char c,int i,int j)
{
    set <pair<ll,ll>> s{{1,1},{2,2},{3,3},{1,3},{3,1}};
    if(s.find({i,j})==s.end())
    {
        return 0;
    }
    else
    {
        if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]==c)
        return 1;
        if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[1][3]==c)
        return 1;
    }
    return 0;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll x = 0, o = 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    x++;
                if (a[i][j] == 'O')
                    o++;
            }
        }
        if (o > x || (x - o) > 1)
        {
            cout << "no\n";
            continue;
        }

        /*  1 2 3
            4 5 6
            7 8 9
                    */
        bool winx = 0, wino = 0;
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (a[i][j] == 'X' || a[i][j] == 'O')
                {
                    if (a[i][j] == 'X')
                    {
                        winx = winx || okrc('X', i, j) || okdia('X', i, j);
                    }
                    else
                    {
                        wino = wino || okrc('O', i, j) || okdia('O', i, j);
                    }
                }
            }
        }
        if(winx && x==o)
        cout<<"no\n";
        else if(wino && !winx && x>o)
        cout<<"no\n";
        else if(winx && wino)
        cout<<"no\n";
        else
        cout<<"yes\n";
    }
}