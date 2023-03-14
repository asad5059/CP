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
ll cnt=1;
ll seq(ll n)
{
    if(n==1)
    return cnt;
    cnt++;
    if(n%2==0)
    {
        seq(n/2);
    }
    else
    seq((3*n)+1);
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    cout<<seq(n);
}