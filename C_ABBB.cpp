#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack <char> stk;
        for(int i=0;i<s.size();i++)
        {
            if(stk.size()==0)
            {
                stk.push(s[i]);
            }
           else if(stk.top()=='A' && s[i]=='B')
           {
               stk.pop();
           }
           else if(stk.top()=='B' && s[i]=='B')
           {
               stk.pop();
           }
           else
           {
               stk.push(s[i]);
           }
           

        }
        cout<<stk.size()<<endl;
    }
}