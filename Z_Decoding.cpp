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
ll mid(ll n)
{
    if(n%2==0)
    return (n/2);
    else
    return ceil(n/2.0);
}
int main()
{
    fastio();
    ll n,med;
    cin>>n;
    string s;
    cin>>s;
    char c[n];
    for(int i=0;i<n;i++)
    {
        c[i]='0';
    }
    for(int i=0;i<s.size();i++,n--)
    {
        med=mid(n);
        if(c[med-1]=='0')
        c[med-1]=s[i];
        else
        {
            for(int j=med;j<s.size();j++)
            {
                if(c[j]=='0')
                {
                    c[j]=s[i];
                    break;
                }
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<c[i];
    }
}