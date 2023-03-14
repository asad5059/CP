#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,a,b;
        cin>>x;
        if(x%2==0)
        {
            a=x/2;
            a++;
            b=x-a;
        }
        else
        {

            a=ceil(x/2.0);
            b=x-a;
        }
        cout<<a<<" "<<b<<endl;
        
    }
}