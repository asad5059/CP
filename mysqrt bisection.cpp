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
    double l=0,r=n,mid;
    while(abs(l-r)>=1e-7)
    {
        mid=(l+r)/2;
        if(mid*mid<=n)
        {
            l=mid;
        }
        else
        r=mid;
    }
    cout<<l;
}