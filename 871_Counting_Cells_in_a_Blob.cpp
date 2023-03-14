#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
ll row, col, mx = 0, k = 0, cnt = 0,c;
int vis[200][200];
int a[200][200];
string sx = "";
int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, -1, 0, 1, 1, -1, 1, -1};
bool isValid(int x, int y)
{
    return x < k && y <=c && vis[x][y] == 0 && x >= 1 && y >= 1 && a[x][y] == 1;
}
void dfs(int x, int y)
{
    cnt++;
    vis[x][y] = 1;
    for (int i = 0; i < 8; i++)
    {
        if (isValid(x + dx[i], y + dy[i]))
        {
            dfs(x + dx[i], y + dy[i]);
        }
    }
}
int main()
{
    fastio();
    ll t,sp=0;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--)
    {
        string s;
        k = 1;
        cnt = 0;
        mx = 0;
        c=0;
        memset(a, -1, sizeof(a));
        memset(vis, 0, sizeof(vis));
        while (getline(cin, s))
        {
            if(k<=1)
            c=s.size();
            if (s[0] == '\0')
            {
                break;
            }
            for (int i = 0; i < s.size(); i++)
            {
                a[k][i + 1] = s[i] - '0';
            }
            k++;
        }
        for (int i = 1; i <k; i++)
        {
            for (int j = 1; j <=c; j++)
            {
                cnt=0;
                if (vis[i][j] == 0 && a[i][j] == 1)
                {
                    dfs(i, j);
                    mx = max(cnt, mx);
                }
            }
        }
        // for (int i = 1; i <k; i++)
        // {
        //     for (int j = 1; j <=c; j++)
        //     {
        //         cout<<vis[i][j];
        //     }
        //     cout<<endl;
        // }
        if(sp) cout<<"\n";
        cout << mx << "\n";
        sp=1;
    }
}