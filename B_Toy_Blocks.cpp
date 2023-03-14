#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
       ll n,x,sum=0,cnt=0,sum2=0;
       cin>>n;
       vector <ll> v;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           sum+=x;
           v.push_back(x);
       }
       sort(v.begin(),v.end());
       ll min=v[0];
       sum2=sum;
       while(sum%n-1!=0)
       {
           sum++;
       }
       cout<<sum-sum2<<endl;
    }
}