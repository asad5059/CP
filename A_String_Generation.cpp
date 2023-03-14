#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        for(int i=0;i<k;i++)
        cout<<'a';
        int f=0;
        for(int i=k;i<n;i++)
        {
            if(f==0)
            {
                cout<<'c';
                f++;
            }
            else if(f==1)
            {
                cout<<'b';
                f++;
            }
            else
            {
                f=0;
                cout<<'a';
            }
            
        }
       cout<<endl;
    }
}