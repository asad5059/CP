#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ull p, q, ans, cnt = 0;
        cin >> p >> q;
        if (p > q && p % q != 0)
            ans = p;
        else
        {
           
            ull n = p, x = p;
           
            for (ull i = sqrt(p); i >=1; i--)
            {

                if (p % i == 0)
                {
                    ll m = p / i;
                    if (q % i != 0)
                    {
                        ans = i;
                        break;
                    }
                    else if (q % m != 0 && m!=q)
                    {
                        ans = m;
                        break;
                    }
                }
            }
        }
        cout <<ans<< endl;
    }
}