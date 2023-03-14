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
    string s="abcdefghijklmnop";
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string p;
        cin>>p;
        for(ll i=0;i<n;i+=4)
        {
            string q=p.substr(i,4);
            string f;
            f=s;
            for(ll j=0;j<q.size();j++)
            {
                if(q[j]=='0')
                {
                    f=f.substr(0,f.size()/2);
                }
                else if(q[j]=='1')
                {
                    f=f.substr(f.size()/2,f.size()/2);
                }
            }
            cout<<f;
        }
        cout<<endl;
    }
}