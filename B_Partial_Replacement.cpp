#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
bool ok(string s,int k)
{
    bool f=1;
    for(int i=0;i<s.size();i++)
    {
        ll cnt=0;
        for(int j=i;j<i+k;j++)
        {
            if(s[j]=='x')
            {
                cnt++;
                break;
            }
        }
        if(cnt<0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, cnt = 0,pos1=0,pos2=0;
        string s;
        cin >> n >> k;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                s[i]='x';
                pos1=i;
                cnt++;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='x')
            {
                pos2=pos1;
                break;
            }
            else if(s[i]=='*')
            {
                s[i]='x';
                cnt++;
                pos2=i;
                break;
            }
        }
        if(abs(pos1-pos2)<=k)
        {
            cout<<cnt<<endl;
            continue;
        }
        while(abs(pos1-pos2)>k)
        {
            for(int i=pos1+k;s[i]!='*' || (i>=0 && i<s.size());i--)
            {
                if(s[i]=='*')
                {
                    cnt++;
                    pos1=i;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}