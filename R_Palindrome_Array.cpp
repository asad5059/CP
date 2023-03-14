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
ll n,cnt=0;
vector <ll> v1,v2;
void pal(ll n)
{
    if(n<=0) return;
    v2.pb(v1[n-1]);
    pal(n-1);
}
int main()
{
    fastio();
    cin>>n;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.pb(x);
    }
    pal(n);
    if(v1==v2) cout<<"YES";
    else
    cout<<"NO";
}