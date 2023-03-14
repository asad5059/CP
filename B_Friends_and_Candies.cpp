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
        ll n;
        cin>>n;
        vector <ll> v(n);
        set <ll> s;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            s.insert(v[i]);
        }
        if(sum%n!=0)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(s.size()==1)
        {
            cout<<0<<"\n";
            continue;
        }
        sort(v.begin(),v.end());
        ll cnt=sum/n,c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>cnt)
            c++;
        }
        cout<<c<<"\n";
    }
}