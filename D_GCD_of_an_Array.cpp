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
    ll n,q,p,x;
    cin>>n>>q;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        cin>>p>>x;
        v[p-1]*=x;
        ll ans=v[0];
        for(int i=1;i<n;i++)
        {
            ans=__gcd(ans,v[i]);
            if(ans==1) break;
        }
        cout<<ans%1000000007<<'\n';
    }

}