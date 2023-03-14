#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector <ll> v;
        ll n,x,d1,d2;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        x=accumulate(v.begin(),v.end(),0);
        if(x%2!=0)
        x++;
        n=x/2;
        d1=n-v[0];
        d2=n-v[1];
        cout<<d1+d2<<endl;
        for(int i=0;i<d1+d2;i++)
        {
            if(i<d1)
            cout<<1<<" ";
            else
            {
                cout<<2<<" ";
            }
            
        }
        cout<<endl;

    }
}