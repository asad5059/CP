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
    string s,s2;
    cin>>s;
    s2=s;
    reverse(s2.begin(),s2.end());
    set <char> st;
    for(int i=0;i<s.size();i++)
    st.insert(s[i]);
    if(st.size()==1)
    cout<<0;
    else if(s!=s2)
    cout<<s.size();
    else if(s==s2)
    cout<<s.size()-1;
}