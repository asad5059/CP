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
        set <float> s;
        ll n;
        cin>>n;
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            ll p=v[i];
            for(int j=n-1 ;j>i;j--)
            {
                s.insert(.5*abs(v[j]-p));
            }
        }
        cout<<s.size()<<endl;
    }
}
