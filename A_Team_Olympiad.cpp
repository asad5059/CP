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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map <ll,ll> mp;
    mp[1]=0;
    mp[2]=0;
    mp[3]=0;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    ll miin=INT_MAX;
    for(auto it : mp)
    {
        miin=min(miin,it.second);
    }
    cout<<miin<<endl;
    if(miin!=0)
    {
        
        for(int i=0;i<miin;i++)
        {
            ll f1=0,f2=0,f3=0;
            rrr:
            for(int j=0;j<v.size();j++)
            {
                if(v[j]==1 && f1==0)
                {
                    cout<<j+1<<" ";
                    v[j]=0;
                    f1++;
                    goto rrr;
                }
                else if(v[j]==2 && f2==0)
                {
                    cout<<j+1<<" ";
                    f2++;
                    v[j]=0;
                    goto rrr;
                }
                else if(v[j]==3 && f3==0)
                {
                    cout<<j+1<<" ";
                    f3++;
                    v[j]=0;
                    
                }
            }
            cout<<endl;
        }
    }
}