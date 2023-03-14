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
    ll n;
    cin>>n;
    map <string,ll> mp;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    ll mx=0;
    for(auto it : mp)
    {
        cout<<it.ff<<" "<<it.ss<<endl;
    }
   
}
