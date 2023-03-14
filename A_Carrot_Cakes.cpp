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
    ll n,t,k,d;
    cin>>n>>t>>k>>d;
    ll cnt=0;
    while(cnt<=d)
    {
        n-=k;
        cnt+=t;
    }
    if(n<=0)
    cout<<"NO";
    else
    {
        cout<<"YES";
    }
    
}
