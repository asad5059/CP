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
        ll n, x;
        cin >> n;
        vector<ll> v;
        set <ll> s;
        bool f2=0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x<0) f2=1;
            v.pb(x);
            s.insert(x);
        }
        if(f2)
        {
            cout<<"No\n";
            continue;
        }
        bool f=0;
        while (!f && n<300)
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        continue;
                    x = abs(v[i] - v[j]);
                    if (s.find(x) == s.end())
                    {
                        v.push_back(x);
                        s.insert(x);
                    }
                }
            }
            f = 1;
            n = v.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        continue;
                    x = abs(v[i] - v[j]);
                    if (s.find(x) == s.end())
                    {
                        f = 0;
                        break;
                    }
                }
                if (!f)
                    break;
            }
            if (n > 300)
                break;
                if(f)
                break;
        }
        if (f)
        {
            cout << "Yes\n"
                 << n << "\n";
            for (auto i : v)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << "No\n";
    }
}