#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, cnt = 0, flag = 0,cnt2=0;
        cin >> n;
        vector<ll> v, v1,v2, v3, v4;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        v2 = v;
        sort(v2.begin(), v2.end());
        if (v2 == v)
            cout << 0 << endl;
        else
        {
            v2.clear();
            v3.clear();
            v4.clear();
            while (1)
            {
                v.erase(v.begin()+0);
                v2=v;
                cnt++;
                sort(v2.begin(),v2.end());
                ll max=v2[v2.size()-1],sz;


                if(v[sz]==max)
                break;
            }
            for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}