#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        string s1,s2;
        cin>>s1;
        s2=s1;
        sort(s2.begin(),s2.end());
        ll c=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i]) c++;
        }
        cout<<c<<endl;
    }
}