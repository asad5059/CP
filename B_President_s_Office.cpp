#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastio();
    set <char> s;
    ll n,m,x,y;
    cin>>n>>m;
    char c;
    char a[n][m];
    cin>>c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==c)
            {
                if(a[i-1][j]!='.' && a[i-1][j]!=c && i-1<n && i-1>=0 && j<m)
                {
                    s.insert(a[i-1][j]);
                }
                if(a[i+1][j]!='.' && a[i+1][j]!=c && i+1<n && j<m)
                {
                    s.insert(a[i+1][j]);
                }
                if(a[i][j-1]!='.' && a[i][j-1]!=c && i<n && j-1<m && j-1>=0)
                {
                    s.insert(a[i][j-1]);
                }
                if(a[i][j+1]!='.' && a[i][j+1]!=c && i<n && j+1<m)
                {
                    s.insert(a[i][j+1]);
                }
            }
        }
    }
    cout<<s.size();

}