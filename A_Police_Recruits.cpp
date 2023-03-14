#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,cnt=0,s=0,ans=0;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
                
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1 && cnt==0)
        ans++;
        else if(v[i]==-1)
        {
            cnt--;
            
        }
        else
        {
            cnt+=v[i];
        }
        

    }
    cout<<ans<<endl;
}