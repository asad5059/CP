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
    ll n,t,x=1;
    cin>>n>>t;
    if(n==1 && t==10)
    cout<<-1;
    else if(t==10)
    {
        cout<<1;
        for(int i=0;i<n-1;i++)
        cout<<0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
    }
}
