#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, sum1=0,sum2=0;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            if(sum1<=sum2)
            {
                sum1+=v[i];
            }
            else
            {
                sum2+=v[i];
            }
            
        }
        cout<<max(sum1,sum2)<<endl;
    }
}