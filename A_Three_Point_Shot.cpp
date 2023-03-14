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
int main()
{
    fastio();
    ll x,y;
    cin>>x>>y;
    if(x<y) swap(x,y);
    if(y+3>x) cout<<"Yes";
    else cout<<"No";
}
