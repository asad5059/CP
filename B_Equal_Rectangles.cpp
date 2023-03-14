#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector <ll> v;
        for(int i=0;i<4*n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        if(v.size()==1 || v.size()==2)
        cout<<"YES\n";
        else if(v[1]*v[2]==v[0]*v[3])
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }


     }
}
