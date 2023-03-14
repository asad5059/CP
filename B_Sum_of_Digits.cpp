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
int main()
{
    fastio();
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<0;
        return 0;
    }
    ll sum=10,cnt=0;
    while(sum>9)
    {
        ll x=0;
        for(int i=0;i<s.size();i++)
        {
            x+=s[i]-'0';
        }
        sum=x;
        s.clear();
        ll t=x;
        while(t)
        {
            s+=t%10 +'0';
            t/=10;
        }
        cnt++;
    }
    cout<<cnt;
}