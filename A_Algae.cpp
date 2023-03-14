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
    ll p,q,w;
    cin>>p>>q>>w;
    for(int i=0;i<10;i++)
    {
        ll r;
        r=p*w;
        r-=q;
        cout<<r<<'\n';
        w=r;
    }
}
