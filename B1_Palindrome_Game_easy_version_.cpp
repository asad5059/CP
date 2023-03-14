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
bool ok(string s, int n)
{
    ll st = 0, e = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (st == e || st + 1 == e)
            break;
        if (s[st] != s[e])
            return 0;
        st++;
        e--;
    }
    return 1;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c1 = 0, c0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }
        if (ok(s, n))
        {
            if (c0 % 2 != 0 && c0 > 1)
                cout << "ALICE\n";
            else
                cout << "BOB\n";
        }
        else
        {
            if (c1==1 && c0%2==0)
            cout<<"DRAW\n";
            else if(c1==1 && c0%2!=0)
            cout<<"BOB\n";
            else 
            cout<<"ALICE\n";
        }
    }
}