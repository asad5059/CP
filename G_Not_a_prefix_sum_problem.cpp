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
        ll n,q;
        cin>>n>>q;
        vector <ll> v(n),sum;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<q;i++)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            y--;
            cout<<accumulate(v.begin()+x,v.begin()+y,0);
        }
        cout<<endl;
    }
}
