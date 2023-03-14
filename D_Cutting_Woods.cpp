///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vpp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(vtor) vtor.begin(), vtor.end()
#define rall(vtor) vtor.rbegin(), vtor.rend()

#define pi 2 * acos(0.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
const ll mod = 1e9 + 7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

#define EPS 1e-13
#define maxii 32000
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return gcd;
}
ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }

bool compare(pair<ll, ll> l, pair<ll, ll> r)
{
    // cout<<"Comparing "<<l.second<<" "<<r.second<<endl;
    if (l.first < r.first)
        return true;
    else if (l.first == r.first && l.second < r.second)
        return true;
    else
        return false;
}
set<string> vs;
void permute(string str, string out)
{
    // When size of str becomes 0, out has a
    // permutation (length of out is n)
    if (str.size() == 0)
    {
        vs.insert(out);
        return;
    }

    // One be one move all characters at
    // the beginning of out (or result)
    for (int i = 0; i < str.size(); i++)
    {
        // Remove first character from str and
        // add it to out
        permute(str.substr(1), out + str[0]);

        // Rotate string in a way second character
        // moves to the beginning.
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll f1(int x,vector <ll> v)
{
    ll l=0,r=v.size(),m;
    while(l+1<r)
    {
        m=(l+r)/2;
        if(x<=v[m])
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    return l;
}
ll f2(int x,vector <ll> v)
{
    ll l=0,r=v.size(),m;
    while(l+1<r)
    {
        m=(l+r)/2;
        if(x>v[m])
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, q;
    cin >> l >> q;
    ll c[q + 1], x[q + 1];
    vector<ll> v;
    v.pb(l);
    for (ll i = 0; i < q; i++)
    {
        cin >> c[i] >> x[i];
        if (c[i] == 1)
        {
            v.pb(x[i]);
            sort(v.begin(), v.end());
        }
        else
        {
            int p1=lower_bound(v.begin(),v.end(),x[i])-v.begin();
            int p2=upper_bound(v.begin(),v.end(),x[i])-v.begin();
            if(p1!=0)
            cout<<v[p2]-v[p1]+1<<"\n";
            else
            cout<<v[0]<<"\n";
        }
    }
    return 0;
}
// //5
// 1 2 ---- 3 5
// 1 2 ---- 3 4