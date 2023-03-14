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
bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for(int i=0;i<N;i++)
    {
        if(s1[0]==s2[i])
        {
            string f=s2.substr(i,M);
            if(f==s1)
            return 1;
        }
    }
    return 0;
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    vector <pair<int,string>> v;
    vector <string> ans;
    string x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb({x.size(),x});
    }
    sort(v.begin(),v.end());
    bool f=0;
    x=v[0].ss;
    ans.pb(x);
    for(int i=1;i<n;i++)
    {
        y=v[i].ss;
        f=isSubstring(x,y);
        if(f==0)
        {
            cout<<"NO";
            return 0;
        }
        ans.pb(v[i].ss);
        x=y;
    }
    cout<<"YES\n";
    for(auto it:ans)
    cout<<it<<endl;
    
}