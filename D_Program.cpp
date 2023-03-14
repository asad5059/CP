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
        ll n,m,x=0,p,q;
        set <ll> s;
        cin>>n>>m;
        s.insert(x);
        string st;
        cin>>st;
        for(int i=0;i<m;i++)
        {
            cin>>p>>q;
            x=0;
            string s2=st.substr(0,p-1);
            string s3=st.substr(q-1,st.size());
            string s4=s2+s3;
            for(int i=0;i<s4.size();i++)
            {
                if(s4[i]=='-')
                {
                    x--;
                    s.insert(x);
                }
                else
                {
                    x++;
                    s.insert(x);
                }
                
            }
            cout<<s.size()<<"\n";


        }
    }
}
