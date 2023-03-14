#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = 0, n, k, x, pos = 0, pos2, am, cnt = 0, cnt2 = 0;
        cin >> n >> k;
        pos2 = n * k;
        am = ceil(n / 2) - 1;
        vector<ll> v, arr;
        for (int i = 0; i < n * k; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<am;j++){
            arr.push_back(v[pos]);
            pos++;
            }
            
            for(int l=0;l<n-am;l++)
            {
                arr.push_back(v[pos2-1]);
                pos2--;
            }
            sort(arr.begin(),arr.end());
            ans+=arr[ceil(arr.size()/2)];
            
        }
        cout<<am<<endl;
    }
}