#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        set <ll> s;
        ll n,x;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        if(s.size()!=n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        
    }
    
}