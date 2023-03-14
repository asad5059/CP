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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    set <char> st;
    map <char,ll> mp;
    map <char,ll>::iterator it;
    for(ll i=0;i<s.size();i++)
    {
        mp[s[i]]++;
        st.insert(s[i]);
    }
    bool f=true;
    for(auto i:mp)
    {
        if(i.ss%k!=0)
        {
            f=false;
            cout<<-1;
            return 0;
        }
    }
    if(st.size()==1)
    {
        cout<<s;
        return 0;
    }
    string ans;
    for(auto it : mp)
    {
        ll xyz=it.second/k;
        for(ll i= 0; i<xyz; i++)
        {
            ans+=it.first;
        }
    }
    for(int i=0;i<k;i++)
    cout<<ans;
}
