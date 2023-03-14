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
    ll n;
    cin>>n;
    vector <ll> v1(n),v2(n),r(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<n;i++)
    {
        r[i]=v1[i]*v2[i];
    }
    ll s=accumulate(r.begin(),r.end(),0);
    if(s==0) cout<<"Yes";
    else cout<<"No";
}
