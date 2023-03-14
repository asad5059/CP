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
    ll n;
    cin>>n;
    ll ans=0;
    if(n==1)
    cout<<4;
    else if(n==2)
    cout<<4<<endl;
    else
    {
        ans=4;
        n=n-2;
        for(int i=0;i<n;i++)
        {
            ans+=2;
        }
        cout<<ans;
    }
}
