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
    // fastio();
    ll t;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        ll a[101],x=1,n=0,j=0;
        stringstream ss(s);
        while(ss>>a[j])
               ++j;
        ll ans=1;
        for(int i=0;i<j;i++)
        {
            for(int l=i+1;l<j;l++)
            {
                if(i!=j)
                {
                    ans=max(ans,__gcd(a[i],a[l]));
                }
            }
        }
        cout<<ans<<endl;
    }
}