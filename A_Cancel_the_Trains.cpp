
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,cnt=0;
        cin>>a>>b;
        vector <ll> v(a);
        vector <ll> :: iterator it;
        for(int i=0;i<a;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>x;
            it=find(v.begin(),v.end(),x);
            if(it!=v.end())
            cnt++;
        }
        cout<<cnt<<endl;

    }
}