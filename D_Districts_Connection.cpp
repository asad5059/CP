#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> v1, v2;
        vector<ll> :: iterator it;
        int n;
        cin >> n;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        v2 = v1;
        v2.erase(unique(v2.begin(), v2.end()), v2.end());
        if (v2.size() == 1)
            cout << "NO\n";
        else
        {
            
            int flag[n];
            memset(flag,0,sizeof(flag));
            cout << "YES\n";
            int j=0,cnt=0;
            for(int i=n-1;i>=0;i--)
            {
                if(cnt==n-1)
                break;
                else if(v1[j]!=v1[i])
                {
                    cout<<j+1<<" "<<i+1<<endl;
                    flag[j]=1;
                    flag[i]=1;
                    cnt++;
                }
            }
            while(cnt!=n-1)
            {
               
                j++;
                for(int i=0;i<n;i++)
                {
                    if(cnt==n-1)
                    break;
                    else if(flag[i]==0 && j!=i && v1[i]!=v1[j])
                    {
                        cout<<j+1<<" "<<i+1<<endl;
                        cnt++;
                    }
                }
            }
            
            
        }
    }
}