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
    ll k,s,cnt=0;
    cin>>k>>s;
    for(ll i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(s-(i+j)<=k && s-(i+j)>=0)
            cnt++;
        }
    }
    cout<<cnt;
}