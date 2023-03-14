#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m,x;
        cin >> n >> m;
        vector<int> row[n], col[m];
        vector<int> :: iterator it;
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                row[i].push_back(x);
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>x;
                col[i].push_back(x);
            }
        }
        int flag[n];
        for(int i=0;i<n;i++)
        {
            flag[i]=col[0][i];
            for(int j=0;j<n;j++)
            {
                it=find(row[j].begin(),row[j].end(),flag[i]);
                if(it!=row[j].end())
                {
                    for(int k=0;k<m;k++)
                    {
                        cout<<row[j][k]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
}