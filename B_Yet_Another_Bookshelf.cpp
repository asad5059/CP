#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0, sum = 0, sum2 = 0, cnt2 = 0;
        cin >> n;
        vector<ll> v1, v2, v3;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v1.push_back(x);
            sum += x;
        }
       if(sum==1)
       cout<<0<<endl;
       else
       {
           for(int i=n-1;i>=0;i--)
           {
               if(sum2==sum)
               break;
               else if(v1[i]==0 && sum2>0)
               cnt++;
               else if(v1[i]==1)
               sum2++;
           }
           cout<<cnt<<endl;
       }
    }
}