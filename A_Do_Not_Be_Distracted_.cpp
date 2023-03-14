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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int k=0;
        bool f=1;
        while(k<s.size() && f)
        {
            char c=s[k];
            while(s[k]==c)
            k++;
            for(int i=k;i<s.size();i++)
            {
                if(s[i]==c)
                {
                    f=0;
                    break;
                }
            }
        }
        if(f) cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}