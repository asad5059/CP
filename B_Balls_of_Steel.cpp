#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin >> n >> x;
        vector <ll> vec(n),v(n);
        for(i=0;i<n;i++)
        {
            cin >> vec[i];
            cin >> v[i];
        }
        p=*max_element(vec.begin(),vec.end());
        q=*min_element(vec.begin(),vec.end());
        count=abs(p-q);
        p=*max_element(v.begin(),v.end());
        q=*min_element(v.begin(),v.end());
        m=abs(p-q);
        if(m<=x && count<=x)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
}