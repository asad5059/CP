#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,f=0,x;
        vector <ll> v;
        vector <ll>:: iterator px;
        cin>>n;
        map <ll,ll> mp;
        map <ll,ll> :: iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                int pos=0;
                for(int i=0;i<n;i++)
                {
                    if(it->first==v[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
                f=100;
                break;
            }
        }
        if(f!=100)
        cout<<-1<<endl;
    }
}