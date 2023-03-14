#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
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
        ll n,w,wr;
        cin>>n>>w>>wr;
        ll a[n];
        map <ll,ll, greater <ll>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool f=0;
        if(wr>=w)
        f=1;
        w-=wr;
        for(auto i:mp)
        {
            if(i.ss>=2)
            {
                ll q=i.ss/2;
                w-=(2*q*i.ff);
                i.ss-=q;
            }
            if(w<=0)
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}