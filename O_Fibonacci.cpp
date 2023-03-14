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
ll cnt=0;
ll fib(ll n1,ll n2,ll x)
{
    if(cnt>=x-1)
    {
        return n1;
    }
    cnt++;
    fib(n2,n1+n2,x);
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    cout<<fib(0,1,n);
}