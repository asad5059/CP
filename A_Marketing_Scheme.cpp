#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(l%(r+1)>=(double) (r+1)/2)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
}