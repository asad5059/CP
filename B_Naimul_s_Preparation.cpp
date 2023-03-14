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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(m);
    for(int i=0;i<m;i++)
    cin>>v[i];
    ll p=accumulate(v.begin(),v.end(),0);
    if(n-p>=0)
    cout<<(n-p);
    else
    {
        cout<<-1;
    }
    
}
