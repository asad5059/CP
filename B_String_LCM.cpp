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
        string a,b;
        cin>>a>>b;
        if(b>a) swap(a,b);
        ll x,y;
        x=a.size();
        y=b.size();
        ll lcm=__gcd(x,y);
        lcm=(x*y)/lcm;
        string ans="";
        for(int i=0;i<lcm/b.size();i++)
        {
            ans+=b;
        }
        string tmp=a;
        while(tmp.size()<lcm)
        {
            tmp+=a;
        }
        string t2=tmp.substr(0,lcm);
        if(ans==t2) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
