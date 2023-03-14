#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v1,v2;
    for(int i=0;i<n*2;i++)
    {
        int x;
        cin>>x;
        if(i%2==0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
        
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v1[i]== v2[j] && i!=j)
            cnt++;
        }
    }
    cout<<cnt<<endl;
}