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
ll cnt=0,s,e;
void f(ll s,ll e)
{
    if(s==e)
    {
        cnt++;
    }
    if(s>e)
    {
        return;
    }
    f(s+1,e);
    f(s+2,e);
    f(s+3,e);
}
int main()
{
    fastio();
    cin>>s>>e;
    f(s,e);
    cout<<cnt;
}