#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans;
        cin >> n;
        vector<ll> v1, v2;
        vector<ll>::iterator it;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        v2 = v1;
        v2.erase(unique(v2.begin(), v2.end()), v2.end());
        sort(v2.begin(), v2.end(), greater<int>());
        if (v2.size() == 1)
            cout << -1 << endl;
        else
        {
            int ans;
            for(int i=0;i<n;i++)
            {
                if(v1[i]==v2[0])
                {
                    v1[i]=1;
                }
                else
                {
                    v1[i]=0;
                }
                
            }
            for(int i=0;i<n;i++)
            {
                if(v1[i]==1 && v1[i+1]==0)
                {
                    ans=i;
                    break;
                }
                else if(v1[i]==0 && v1[i-1]==1)
                {
                    ans=i-1;
                    break;
                }
                else if(v1[i]==1 && v1[i-1]==0)
                {
                    ans = i;
                    break;
                }
            }
            cout<<ans+1<<endl;
        }
    }
}