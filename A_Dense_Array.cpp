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
        vector <ll> v(n);
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<n;i++)
        {
            ll mx,mi;
            mx=max(v[i],v[i-1]);
            mi=min(v[i],v[i-1]);
            if(mx==mi)
            continue;
            else if(mi*2<mx)
            {
                while(mi*2<mx)
                {
                    mi*=2;
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}