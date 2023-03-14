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
        ll n,c=0;
        cin>>n;
        vector <ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==3 || a[i]==1)
            c++;
        }
        // sort(a,a+n);
        cout<<c<<endl;

    }
}