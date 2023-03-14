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
    ll n;
    cin >> n;
    ll a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum=(sum+1000000007+ a[i])%1000000007;
    }
    ll q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        sum=(sum%1000000007*2%1000000007)%1000000007;
        sum=sum%1000000007;
        cout<<sum<<"\n";
    }
}