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
    ll n,x,cnt=0;
    cin>>n;
    int a[n],b[n],c[2*n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i];
        cnt++;
    }
    for(int i=0;i<n;i++)
    {
        x=a[i];
        c[cnt]=x;
        cnt++;
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<c[i]<<" ";
    }
}