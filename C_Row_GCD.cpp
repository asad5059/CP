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
    ull n,m;
    cin>>n>>m;
    vector <ull> v1(n),v2(m);
    for(ll i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    for(int j=0;j<m;j++)
    {
        ull x=v2[j]+v1[0];
        ull y=v2[j]+v1[n-1];
        cout<<__gcd(x,y)<<" ";
    }
}
