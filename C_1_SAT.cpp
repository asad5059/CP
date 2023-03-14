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
    map <string, int> mp;
    vector <string> v;
    string x;
    for(int i=0;i<n; i++)
    {
        cin>>x;
        if(x[0]=='!')
        mp[x]++;
        else
        {
            v.push_back(x);
        }
        
    }
    bool f=false;
    string ans="";
    for(auto it:v)
    {
        string q='!'+it;
        if(mp[q]>=1)
        {
            f=true;
            ans=it;
            break;
        }
    }
    if(f) cout<<ans;
    else
    {
        cout<<"satisfiable";
    }
    
}
