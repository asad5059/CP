#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll k,r;
    cin>>k>>r;
    ll cst=0,cnt=0,i=0;
    for(i=1;;i++)
    {
        if(k*i%10==0 || (k*i)%10==r)
        break;
        else
        {
            cnt++;
        }
        
    }
    cout<<cnt+1<<endl;
}