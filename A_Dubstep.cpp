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
    string s,s2="";
    cin>>s;
    ll cnt=0,f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(f==1)
            s2+=" ";
            continue;
        }
        else
        {
            s2+=s[i];
            f=1;
        }
        
    }
    for(ll i=0;i<s2.size();i++)
    {
        cout<<s2[i];
        if(s2[i+1]==' ' && s2[i+2]==' ')
        {
            i++;
        }
    }
}
