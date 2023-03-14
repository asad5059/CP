#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int

ll n, k;

ll func(ll m)
{
    return ((m * k) - (((m * (m + 1)) / 2) - 1));
}

int main()
{
    cin >> n >> k;
    ll x = k * (k - 1) / 2;
    x += 1;
    if (n == 1)
        cout << 0 << endl;
    else if(n>x)
    cout<<-1;
    else
    {
        ll lo = -1, hi = k, mid;
        while (lo + 1 < hi)
        {
            mid = (lo + hi) / 2;
            // cout<<"Mid : "<<mid<<endl;
            //cout<<"Func : "<<func(mid)<<endl;
            if (n <= func(mid))
            {
                hi = mid;
                //cout<<"Hi tik : "<<hi<<endl;
            }

            else
            {
                lo = mid;
                //cout<<"Lo tik : "<<lo<<endl;
            }
            //cout<<"LO : " <<lo<<" Hi : "<<hi<<endl<<endl;
        }
        cout << hi << endl;
    }
    return 0;
}
