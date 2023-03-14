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
    ll n,k,x,y;
    cin>>n>>k;
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.pb({-x,y});
    }
    sort(v.begin(),v.end());
    pair<ll,ll> tmp;
    tmp=v[k-1];
    ll cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==tmp)
        cnt++;

    }
    cout<<cnt;
}
