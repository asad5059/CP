#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b)
        swap(a,b);
        ll st=0,en=0,cnt=0;
        if(a%2!=0 && b%2!=0)
        {
            cnt=a*b;
            cnt+=1;
            cnt/=2;
        }
        else if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0) )
        {
            cnt=a*b;
            cnt/=2;
        }
        else if(a%2==0 && b%2==0)
        {
            cnt=a*b;
            cnt/=2;
        }
        cout<<cnt<<endl;
    }
    
}