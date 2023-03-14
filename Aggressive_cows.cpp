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
        ll n,c;
        cin>>n>>c;
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        //v.erase(unique(v.begin(),v.end()),v.end());
        ll l=1,r=v[v.size()-1],mid;
        while(l+1<r)
        {
           mid=(l+r)/2;
           //cout<<mid<<endl;
           ll cnt=1,x=v[0];
           for(int i=1;i<v.size();i++)
           {
               if(v[i]-x>=mid)
               {
                   cnt++;
                   x=v[i];
               }
           }
           if(cnt<c)
           {
               r=mid;
           }
           else
           {
               l=mid;
           }
        }
        cout<<l<<"\n";
    }
}