#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
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
    vector <ll> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    ll h=0,en=0,cost=0;
    for(int i=1;i<=n;i++)
    {
        // cout<<h<<" "<<en<<" "<<cost<<endl;
        if(en+h-v[i]<0)
        {
            cost+=v[i]-(en+h);
            en=0;
        }
        else
        {
            en=en+h-v[i];
        }
        h=v[i];

    }
    cout<<cost;
}