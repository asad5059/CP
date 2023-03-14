#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    string s;
    set <string> st;
    set <string>:: iterator it;
    while(cin>>s)
    {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z')
            {
                ans+=s[i];
            }
            else if(ans!="")
            {
                st.insert(ans);
                ans="";
            }
        }
        if(ans!="")
        st.insert(ans);
    }
    for(it=st.begin();it!=st.end();it++)
    cout<<*it<<endl;
}