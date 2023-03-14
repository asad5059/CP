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
    cin >> t;
    set <ll> v{2050,20500,205000,2050000,2500000,25000000,250000000,2500000000,25000000000,250000000000,2500000000000,25000000000000,250000000000000};
    while (t--)
    {
        ll all=INT_MAX;
        ll n,mi=INT_MAX,cnt=0;
        cin >> n;
        bool f=0;
        if(n<2050 || n%2050!=0)
        f=1;
        if(n%2050==0)
        {
            string s=to_string(n/2050);
            mi=0;
            for(int i=0;i<s.size();i++)
            {
                mi+=s[i]-'0';
            }
        }
        if(f) cout<<-1;
        else cout<<mi;
        cout<<endl;
    }
}