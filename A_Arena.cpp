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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector  <ll> v(n);
        ll mx=-INT_MAX,mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mx=max(v[i],mx);
            mi=min(v[i],mi);
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==mi)
            cnt++;
        }
        cout<<n-cnt<<endl;
    }
}