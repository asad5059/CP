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
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n,k;
        cin>>n>>k;
        map <ll,ll> mp;
        for(int i=0;i<k;i++)
        {
            cin>>x;
            mp[i]=x;
        }
        string s;
        while(n--)
        {
            cin>>s;
            ll sc=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                sc+=mp[i];
            }
            cout<<sc<<"\n";
        }
    }
}