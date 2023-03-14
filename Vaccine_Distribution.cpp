#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    x:
    while (t--)
    {
        ll n, d, cnt=0,f=0;
        cin >> n >> d;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]>=80 || v[i]<=9)
            {
                f++;
            }
            if(f==d)
            {
                cnt++;
                f=0;
            }
        }
        if(f>0)
        {
            cnt++;
            f=0;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]<80 && v[i]>9)
            {
                f++;
            }
            if(f==d)
            {
                cnt++;
                f=0;
            }
        }
        if(f>0)
        cnt++;
        cout<<cnt<<endl;

    }
}