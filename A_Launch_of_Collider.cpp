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
    string s;
    cin>>s;
    vector <ll> v(n);
    for(auto &x:v)
    {
        cin>>x;
    }
    ll mi=INT_MAX,q,cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            q=v[i+1]-v[i];
            q/=2;
            mi=min(mi,q);
            cnt=1;
        }
    }
    if(cnt==0) cout<<-1;
    else cout<<mi;
}