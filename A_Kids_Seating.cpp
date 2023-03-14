#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,n4,a,b,c,d;
        cin>>n;
        n4=4*n;
        for(int i=0;i<n;i++)
        {
            cout<<n4<<" ";
            n4-=2;
        }
        cout<<endl;
    }
}