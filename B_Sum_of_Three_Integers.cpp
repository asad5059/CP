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
    ll k,s;
    cin>>k>>s;
    ll cnt=0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            ll l=s-(i+j);
            if(l>=0 && l<=k)
            cnt++;
        }
    }
    cout<<cnt;
}
