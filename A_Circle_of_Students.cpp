#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,f=0,flg=0;
        cin>>n;
        vector <ll> v,v2,v3;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        v2=v;
        sort(v2.begin(),v2.end());
        v3=v2;
        reverse(v3.begin(),v3.end());
        if(n<=3 || v2==v || v3==v)
        cout<<"YES\n";
        else
        {
            for(ll i=0;i<n;i++)
            {
                if(v[i]==v2[0])
                {
                    f=i;
                    break;
                }
            }
            for(ll i=f+1;i<n-1;i++)
            {
                if(abs(v[i]-v[i+1])!=1)
                {
                    flg++;
                }
            }
            for(ll i=0;i<f;i++)
            {
                if(abs(v[i]-v[i+1])!=1)
                {
                    flg++;
                }
            }
            if(abs(v[0]-v[v.size()-1])!=1)
            flg++;

            if(flg!=0)
            cout<<"NO"<<endl;
            else
            {
                cout<<"YES\n";
            }
            
        }
        
        
    }
}