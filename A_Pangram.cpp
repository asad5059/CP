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
    map <char,int> mp;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]=tolower(s[i]);
        mp[s[i]]++;
    }
    bool f=true;
    if(mp.size()<26)
    f=false;
    for(auto it:mp)
    {
        if(it.ss==0)
        {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}
