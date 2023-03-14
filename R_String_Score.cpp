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
    string s;
    cin>>s;
    ll sc=0,f=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='V')
        {
            sc+=5;
        }
        else if(s[i]=='W')
        {
            sc+=2;
        }
        else if(s[i]=='X' && i<n-1)
        {
            s.erase(i+1,1);
        }
        else if(s[i]=='Y' && i<n-1)
        {
            s=s+s[i+1];
            s.erase(i+1,1);
        }
        else if(s[i]=='Z' && i<n-1)
        {
            if(s[i+1]=='V')
            {
                sc/=5;
                s.erase(i+1,1);
            }
            else if(s[i+1]=='W')
            {
                sc/=2;
                s.erase(i+1,1);
            }
        }
        //cout<<s<<"\n";
    }
    cout<<sc;
    
}