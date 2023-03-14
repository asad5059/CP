#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        k=n/2;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i+1<=k)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<-a[i]<<" ";
            }
            
        }
        cout<<endl;
    }
}