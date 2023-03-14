#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <string> v,v2;
    int max=0,pos=0;
    int flag[n-1];
    memset(flag,0,sizeof(flag));
    for (int i = 0; i < n - 1; i++)
    {
        string x(s, i, 2);
        v.push_back(x);
    }
    v2=v;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(v2[i]==v[j])
            {
                flag[i]++;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(flag[i]>max)
        {
            max=flag[i];
            pos=i;
        }
    }
   cout<<v[pos]<<endl;
    
}