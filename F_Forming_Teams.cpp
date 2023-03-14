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
        vector <ll> v(n),v2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n<4)
        {
            cout<<1<<endl;
        }
        else
        {
            v2=v;
            v2.erase(unique(v2.begin(),v2.end()),v2.end());
            
        }
        
    }
}
