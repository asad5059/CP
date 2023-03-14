// ID : C191008
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
ll board[100][100],n;
bool ok(ll r,ll c)
{
    ll i, j;
  
    for (i = 0; i < c; i++)
        if (board[r][i])
            return false;
  
    for (i = r, j = c; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
  
    for (i = r, j = c; j >= 0 && i < n; i++, j--)
        if (board[i][j])
            return false;
  
    return true;
}
void f(ll col)
{
    if (col >= n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<endl;
        return;
    }
  
    for (int i = 0; i < n; i++) {
        if (ok(i, col)) {
            board[i][col] = 1;
  
            f(col + 1);  
            board[i][col] = 0; 
        }
    }

}
int main()
{
    fastio();
    cin>>n;
    memset(board,0,sizeof(board));
    f(0);
}