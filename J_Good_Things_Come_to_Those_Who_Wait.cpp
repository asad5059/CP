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
    ll t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        ll k;
        cin>>k;
        vector <ll> v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<tc<<": "<<v[0]*v[k-1]<<endl;

    }
}