#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll s = 0, d = 0, f = 0;
    while (accumulate(v.begin(),v.end(),0)!=0)
    {
       
        if (v[0] >= v[v.size() - 1])
        {
            if (f == 0)
            {
                s += v[0];
                f++;
            }
            else
            {
                d += v[0];
                f = 0;
            }

            v.erase(v.begin() + 0);
        }
        else
        {
            if (v[v.size() - 1]>=v[0])
            {
                if (f == 0)
                {
                    s += v[v.size() - 1];
                    f++;
                }
                else
                {
                    d += v[v.size()-1];
                    f = 0;
                }

                v.erase(v.begin() + v.size() - 1);
            }
        }
        
        
    }
    
    cout << s << " " << d << endl;
}