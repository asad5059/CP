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
bool f[1000009];
int main()
{
    fastio();
    vector <ll> v;
    for(ll i=2;i*i<=1000009;i++)
    {
        if(f[i]==0)
        {
            for(ll j=i*i;j<=1000009;j+=i)
            {
                f[j]=1;
            }
        }
    }
}
