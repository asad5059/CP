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
    cin >> n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb({-x,i+1});
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--)
    {
        cout<<v[i].ss<<" ";
    }
}
