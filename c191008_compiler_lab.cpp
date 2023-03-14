#include <bits/stdc++.h>
#define ll long long int
#define push_back pb
#define ff first
#define ss second
using namespace std;
int main()
{
    string s;
    map <string,int> mp;
    while(cin>>s)
    {
        if(s[s.size()-1]==';') s.resize(s.size()-1);
        if((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') || s[0]=='_')
        {
            if(mp.find(s)==mp.end())
            {
                mp[s]=mp.size();
            }
            cout<<" <id,"<<mp[s]<<"> ";
        }
        else
        cout<<"<"<<s<<">";
    }
}