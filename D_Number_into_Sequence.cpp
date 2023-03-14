#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> divs;
void Sieve(ll n)
{
    while (n % 2 == 0)
    {
        divs.push_back(2);
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            n /= i;
            divs.push_back(i);
        }
    }
    if (n > 2)
        divs.push_back(n);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0, x, y;
        cin >> n;
        x = n;
        vector<ll> v, sz;
        v.clear();
        sz.clear();
        vector<ll>::iterator it;
        divs.clear();
        Sieve(n);
        divs.erase(unique(divs.begin(), divs.end()), divs.end());
        
        for (int i = 0; i < divs.size(); i++)
        {
            cnt = 0;
            x = n;
            y = divs[i];
            while (x % y == 0 && (x / y) % y == 0)
            {
                x /= y;
                cnt++;
            }
            sz.push_back(cnt);
        }

        ll mx = *max_element(sz.begin(), sz.end());
        it = find(sz.begin(), sz.end(), mx);
        ll pos = it - sz.begin();
        y = divs[pos];
        x = n;
        while (x % y == 0 && (x / y) % y == 0)
        {
            x /= y;
            v.push_back(y);
        }
        v.push_back(x);
        
        if (mx == 0)
            cout << 1 << endl
                 << n << endl;
        else
        {
            cout<<v.size()<<endl;
            for (ll i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
        
    }
}