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
ll n;
char a[800][800];
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll x1 = 0, y1 = 0, x2 = 0, y2 = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '*')
                {
                    cnt++;
                    if (cnt == 1)
                        x1 = i, y1 = j;
                    else
                        x2 = i, y2 = j;
                }
            }
        }

        int r1 = 0, c1 = 0, k = 0;
        if(x1==x2) r1=1;
        if(y1==y2) c1=1;

        if (r1 == 0 && c1 == 0)
        {
            a[x1][y2] = '*';
            a[x2][y1] = '*';
        }
        if (r1 == 1)
        {
            if(x1+1<n)
            {
                a[x1+1][y1]='*';
                a[x2+1][y2]='*';
            }
            else
            {
                a[x1-1][y1]='*';
                a[x2-1][y2]='*';
            }
        }
        if(c1==1)
        {
            if(y1+1<n)
            {
                a[x1][y1+1]='*';
                a[x2][y2+1]='*';
            }
            else
            {
                a[x1][y1-1]='*';
                a[x2][y2-1]='*';
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        // cout << endl;
    }
}