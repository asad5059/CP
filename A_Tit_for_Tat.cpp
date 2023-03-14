#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,cnt=0;
        cin>>n>>k;
        ll a[n];
        ll mi;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            mi=a[i];
            if(k>0)
            {
                a[i]=max((ll)0,a[i]-k);
                k-=mi-a[i];
                a[n-1]+=(mi-a[i]);
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}