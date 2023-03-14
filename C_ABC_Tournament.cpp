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
    ll sz=pow(2,n);
    ll x,y;
    vector <ll> v,v1,r;
    vector <ll>::iterator it;
    for(int i=0;i<sz;i+=2)
    {
        cin>>x>>y;
        v1.push_back(x);
        v1.push_back(y);
        if(x>y) v.pb(x);
        else v.pb(y);
    }
    if(n==1)
    {
        ll ans=min(v1[0],v1[1]);
        if(ans==v1[0]) cout<<1;
        else cout<<2;
        return 0;
    }
    while(sz/2!=2)
    {
        r.clear();
        for(int i=0;i<v.size();i+=2)
        {
            r.pb(max(v[i],v[i+1]));
        }
        v.clear();
        v=r;
        sz/=2;
    }
   ll ans=min(v[0],v[1]);
   it=find(v1.begin(),v1.end(),ans);
   cout<<it-v1.begin()+1;
}
