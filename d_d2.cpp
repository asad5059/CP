///Bismillahir Rahmanir Rahim
///Competetive_Battlers
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
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a);
        a = (a * a);
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
 
int main()
{
    // ll c=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll j = 1; j <= t; j++)
    {
        ll n, x;
        cin >> n >> x;
        // n digit, starting from x;
        ll p_pow,n_pow,dig_hoise,dig_ase,dig_baki,total_num;
        ll temp = x,cnt=0;
        while(temp!=0)
        {
            temp = temp/10;
            cnt++;
        }
        p_pow = bigMod(10,cnt);
        n_pow = bigMod(10,cnt) - x;
        dig_hoise = n_pow * cnt;
        dig_baki = n - dig_hoise;
        total_num = dig_hoise/cnt;
        cnt++;
        if(dig_hoise>n)
        {
            total_num= n/(cnt-1);
            if(total_num*(cnt-1)==n)
            cout<<total_num<<endl;
            else
            cout<<-1<<endl;
            continue;

        }
        for(ll i=cnt;i<=16;i++)
        {
            n_pow = (bigMod(10,i) - p_pow);
            dig_ase = n_pow*cnt;
            if(dig_baki<=dig_ase)
            {
                if(dig_baki%cnt==0)
                {
                    dig_hoise+=dig_baki;
                    if(dig_hoise==n)
                    {
                        total_num+=dig_baki/cnt;
                       cout<<total_num<<endl;
                       break;
                    }
                    else
                    {
                     cout<<-1<<endl;
                     break;
                    }
                }
                else
                {
                    cout<<-1<<endl;
                    break;
                }
            }
            else{
                p_pow = bigMod(10,cnt);
                total_num+=(dig_ase/cnt);
                
                dig_hoise+=dig_ase;
                dig_baki = n - dig_hoise;
               
            }
            cnt++;
        }
    }
}
