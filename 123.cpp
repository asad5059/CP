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
set<ll> s1, s2, s3;
ll x, y, k;

int gcd(int a, int b)
{
    if (b == k)
        return a;
    return gcd(b, a % b);
     
}
void div1(ll n)
{
    // ll l=ceil(n/2.0);
    s1.insert(1);
    for (int i = 3; i*i<=n; i+=2)
    {
        if (n % i == 0)
        {
            s1.insert(i);
            s1.insert(n / i);
        }
    }
    s1.insert(n);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        s1.clear();
        s2.clear();
        s3.clear();
        cin >> x >> y >> k;
        ll f=__gcd(x-k,y-k);
        
        div1(f);
        // div2(y);
        for (auto i : s1)
        {
            // cout<<i<<" ";
            if (i>k)
                s3.insert(i);
        }
        cout << s3.size() << endl;
        if (s3.size() > 0)
        {
            for (auto i : s3)
                cout << i << " ";
            cout << endl;
        }
    }
}