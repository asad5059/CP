#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int i=0;
const int row=101,col=101;
int a[row][col];
int b[row][col];
void mat(int r, int c)
{
    if (i >= r)
        return;
    for (int k = 0; k < c; k++)
    {
        cout << a[i][k] + b[i][k]<<" ";
    }
    cout<<endl;
    i++;
    mat(r,c);
}
int main()
{
    fastio();
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    mat(r,c);
}