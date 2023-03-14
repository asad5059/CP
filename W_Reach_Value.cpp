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
ll x=1;
ll cnt=0;
ll ok(ll n,ll x)
{
    cnt++;
    if(x>=n)
    {
        return n==x;
    }
    return ok(n,x*10)||ok(n,x*20);
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        cnt=0;
        ll n;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
        cin>>n;
        if(ok(n,x)==1)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
        cout<<cnt<<endl;
    }
}