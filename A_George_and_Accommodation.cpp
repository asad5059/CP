#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y-x>=2)
        cnt++;   
    }
    cout<<cnt<<endl;
}