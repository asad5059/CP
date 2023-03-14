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
        string s;
        cin>>s;
        if(s[0]==')' || s[s.size()-1]=='(')
        cout<<"NO\n";
        else
        {
            int o=0,c=0,q=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='(') o++;
                else if(s[i]==')') c++;
                else q++;
            }
            if(o==c && q%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
}
