#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < q; i++)
        {
            ll x,y,f=0,l=0,sz;
            cin>>x>>y;
            string s2(s,x-1,y-x+1);
            for(int j=0;j<n;j++)
            {
                if(s2[0]==s[j])
                {
                    f=j;
                    break;
                }
            }
            for(int j=s.size();j>=0;j--)
            {
                if(s2[s2.size()-1]==s[j])
                {
                    l=j;
                    break;
                }
            }
            sz=(l-f)+1;
            if(sz>s2.size())
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
    }
}