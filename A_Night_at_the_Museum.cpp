#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,x=1,y=1;
    for(int i=0;i<s.size();i++)
    {
        y=s[i]-'a'+1;
        cnt+=min(abs(x-y),(26-abs(x-y)));
        x=y;
        
                
    }
    cout<<cnt<<endl;
}