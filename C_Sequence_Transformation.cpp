#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x,cnt=INT_MAX;
        cin>>n;
        map <ll,ll> mp;
        vector <ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        mp[v[0]]++;
        for(ll i=1;i<n;i++)
        {
            if(v[i-1]==v[i])
            continue;
            mp[v[i]]++;
        }
        mp[v[0]]--;
        mp[v[n-1]]--;
        for(auto it : mp)
        {
            cnt=min(it.second,cnt);
        }
        cout<<cnt+1<<endl;
    }
    
}