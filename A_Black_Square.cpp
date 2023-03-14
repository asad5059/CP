#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    ll cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cnt+=a;
        }
        else if(s[i]=='2')
        {
            cnt+=b;

        }
        else if(s[i]=='3')
        {
            cnt+=c;
        }
        else
        {
            cnt+=d;
        }
    }
     cout<<cnt<<endl;
}