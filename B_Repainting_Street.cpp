#include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    #define ff first
    #define ss second
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        ll n,k;
        cin>>n>>k;
        ll a[100005];
       //map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          //mp[a[i]]++;
        }
        ll Count,mx=1000000000000;
        for(int i=1;i<=100;i++)
        {
          Count=0;
          for(int j=0;j<n;j++)
          {
            if(a[j]!=i)
            {
              Count++;
              j=j+k-1;
            }
          }
          mx=min(Count,mx);
        }
      cout<<mx<<endl;
      }
      return 0;
    }