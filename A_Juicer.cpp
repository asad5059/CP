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
    ll n,b,d;
    cin>>n>>b>>d;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>b)
        v[i]=0;
    }
    ll s=0,cnt=0;
    for(ll i=0;i<v.size();i++)
    {
        s+=v[i];
        if(s>d)
        {
            cnt++;
            s=0;
        }
    }
    cout<<cnt;
}
