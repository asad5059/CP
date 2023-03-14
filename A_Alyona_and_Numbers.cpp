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
    ll n, m,cnt=0,x;
    cin>>n>>m;
    if(m>n) swap(m,n);
    x=1;
    ll i=5;
    while(x>0)
    {
        if(m>=i) x=i-1;
        else if(n>=i) x=m;
        else if(i>m) x=m-(i-n)+1;
        if(x>0) cnt+=x;
        i+=5;
    }
    cout<<cnt;
}