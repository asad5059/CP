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
    if(n==1) cout<<-1;
    else
    {
        for(int i=n-1;i>=1;i--)
        cout<<i<<" ";
    }
    cout<<1;
    
}
