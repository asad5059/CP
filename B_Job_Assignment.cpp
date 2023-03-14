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
    set <ll> x1,x2;
    set <ll>:: iterator i1,i2;
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
        x1.insert(x);
        x2.insert(y);
    }
    ll f,y,tot4=INT_MAX,tot1=INT_MAX,tot2=INT_MAX,tot3=INT_MAX;
    i1=x1.begin();
    i2=x2.begin();
    f=*i1;
    y=*i2;
    tot1=max(f,y);
    if(v[f].ss==y)
    {
        tot2=y+y;
        i2++;
        y=*i2;
        tot1=max(f,y);
    }
    if(v[y].ss==f)
    {
        tot3=f+f;
        i1++;
        f=*i2;
        tot1=max(f,y);
    }
    cout<<tot1<<" "<<tot2<<" "<<tot3;



}