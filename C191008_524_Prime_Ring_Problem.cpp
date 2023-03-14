//ID : C191008
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
ll a[17];
bool vis[17];
set<int> s{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43};
bool fo(ll x)
{
    return s.find(x) != s.end();
}
void f(ll x,bool vis[])
{
    if (x >= n)
    {
        if(!fo(a[0]+a[n-1]))
        return;
        cout<<1;
        for (int i = 1; i < n; i++)
        {
            cout <<" "<< a[i];
            
        }
        cout <<"\n";
        return;
    }
    for (int j = 2; j <= n; j++)
    {
        if(vis[j]==1) continue;
        if (fo(j+a[x-1]))
        {
            a[x] = j;
            vis[j]=1;
            f(x + 1,vis);
            a[x] = -1;
            vis[j]=0;
        }
    }
}
int main()
{
    fastio();
    ll cnt = 1;
    while (cin >> n)
    {
        if(cnt>1)
        cout<<"\n";
        memset(a, -1, sizeof(a));
        a[0] = 1;
        vis[1]=1;
        cout << "Case " << cnt << ":\n";
        f(1,vis);
        cnt++;
    }
}