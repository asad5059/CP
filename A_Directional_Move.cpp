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
        char p='E';
        ll n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(p=='E')
                p='S';
                else if(p=='S')
                p='W';
                else if(p=='W')
                p='N';
                else if(p=='N')
                p='E';
            }
            else
            {
                if(p=='E')
                p='N';
                else if(p=='N')
                p='W';
                else if(p=='W')
                p='S';
                else if(p=='S')
                p='E';
            }
        }
        cout<<p<<endl;
    }
}