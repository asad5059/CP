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
        ll px,py;
        string s;
        char a,b;
        cin>>px>>py>>s;
        if(px>=0)
        a='R';
        else if(px<0) a='L';
        if(py>=0)
        b='U';
        else if(py<0)
        b='D';
        ll cnt1=0,cnt2=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==a)
            cnt1++;
            else if(s[i]==b)
            cnt2++;
        }
        if(cnt1>=abs(px) && cnt2>=abs(py))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
