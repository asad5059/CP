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
        ll n,x;
        vector <ll> v;
        cin>>n;
        map <ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.pb(x);
            mp[x]++;
        }
        for(auto it:mp)
        {
            if(it.ss==1)
            {
                x=it.ff;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}