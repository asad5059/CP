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
        ll n,x,y;
        cin>>n;
        vector <pair<ll,ll>> v,v1;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb({-x,y});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            v[i].ff=v[i].ff*-1;
        }
        ll min1=INT64_MAX,min2=INT64_MAX;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(i!=j)
                x=abs(v[i].ff-v[j].ff);
                min1=min(min1,x);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(i!=j)
                y=abs(v[i].ss-v[j].ss);
                min2=min(min2,x);
            }
        }
        //cout<<min1<<" "<<min2<<<
        cout<<min1*min2<<endl;
    }
}