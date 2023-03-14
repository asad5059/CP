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
    string s;
    cin>>s;
    ull ans=0,mul=1;;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(i==0 && s[i]=='9')
        {
            int x=s[i]-'0';
            ans+=x*mul;
            mul*=10;
        }
        else if(i==0 && s[i]!='9')
        {
            int x=s[i]-'0';
            if(x>=5)
            {
                x=9-x;
            }
            ans+=x*mul;
            mul*=10;
        }
        else if(s[i]-'0'>=5)
        {
            int x=s[i]-'0';
            x=9-x;
            ans+=x*mul;
            mul*=10;
        }
        else
        {
            int x=s[i]-'0';
            ans+=x*mul;
            mul*=10;
        }
    }
    if(ans==0) cout<<s;
    else cout<<ans;
}
