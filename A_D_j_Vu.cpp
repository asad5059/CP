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
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll pos = -1;
        for(int i=0;i<n;i++)
        {
            if (s[i] != 'a')
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i=0;i<n-pos;i++)
        {
            cout << s[i];
        }
        cout << 'a';
        for(int i=n-pos;i<n;i++)
        {
            cout << s[i];
        }
        cout<<endl;
    }
}