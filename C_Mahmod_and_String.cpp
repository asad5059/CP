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
    cin>>s;
    map <char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    bool f=true;
    for(auto it:mp)
    {
        if(it.ss>1)
        {
            f=false;
            break;
        }
    }
    if(f) cout<<"yes";
    else cout<<"no";
}
