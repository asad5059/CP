#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    ll n,k;
    cin>>n>>k;
    ll v,sum,i=1,l=1,r=n,mid;
    while (l+1<r)
    {
        mid=(l+r)/2;
        //cout<<mid<<"\n";
        sum=0;
        i=0;
        while((ll)mid/pow(k,i))
        {
            sum+=(ll)mid/pow(k,i); i++;
        }
        //cout<<"Sum : "<<sum<<endl;
        if(sum>=n)
        {
            r=mid;
        }
        else
        l=mid;
    }
    cout<<r;
}