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
ll n,x;
vector <ll> v;
bool f(ll pos,ll cs)
{
    if(pos==n-1)
    {
        return cs==x;
    }
    bool j=f(pos+1,cs+v[pos+1]);
    bool l=f(pos+1,cs-v[pos+1]);
    return j||l;
}
int main()
{
    fastio();
    cin>>n>>x;
    ll k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.pb(k);
    }
    if(f(0,v[0]))
    cout<<"YES";
    else cout<<"NO";
}