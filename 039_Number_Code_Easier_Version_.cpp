#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fastio();
    map <int,char> mp;
    mp.insert({'0','o'});
    mp.insert({'1','i'});
    mp.insert({'3','e'});
    mp.insert({'4','a'});
    mp.insert({'5','s'});
    mp.insert({'7','t'});
    ll t;
    cin>>t;
    t++;
    while(t--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]) cout<<mp[s[i]];
            else cout<<s[i];
        }
        cout<<endl;
    }
}