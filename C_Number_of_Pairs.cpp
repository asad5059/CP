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
vector <ll> v;
int main()
{
    fastio();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        v=vector<ll>(n);
        vector <pair<ll,ll>>v2;
        map <ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]=i;
            v2.pb({v[i],i});
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            // cout<<v[i]<<"\n";
            ll mx=r-v[i];
            ll mi=l-v[i];
            auto it=upper_bound(v.begin(),v.end(),mi);
            auto it2=lower_bound(v.begin(),v.end(),mx);
            ll s=it-v.begin();
            ll e=it2-v.begin();
            if(s<=i)
            s=i+1;
            if(e<=i)
            e=i+1;
            cnt+=s+e;
            

        }
        
        // for(auto i:st)
        // cout<<i.ff<<" "<<i.ss<<"\n";
        cout<<cnt<<"\n";
    }
    
}