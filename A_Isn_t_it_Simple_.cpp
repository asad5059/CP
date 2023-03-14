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
    ll a,b,c,x;
    cin>>a>>b>>c;
    x=a*100+b*10+c;
    if(x%4==0) cout<<"YES";
    else cout<<"NO";
}
