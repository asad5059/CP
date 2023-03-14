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
    while (t--)
    {
        vector <ll> v(3);
        cin>>v[0]>>v[1]>>v[2];
        if(v[0]==v[1]==v[2])
        {
            if(v[0]%7==0)
            cout<<"YES\n";
        }
        sort(v.begin(),v.end());
        if(v[2]-v[1]==1 && v[1]-v[0]==1)
        {
            if(v[2]==4)
            cout<<"YES\n";
            else if(v[2]%7==4)
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
}