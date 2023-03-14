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
        ll n;
        cin>>n;
        string s="",n1="";
        ll p=n;
        while(p)
        {
            ll r=p%10;
            if(r!=0)
            s+=r+'0';
            n1+=r+'0';
            p/=10;
        }
        reverse(s.begin(),s.end());
        for(ll i=n1.size()-1;i>=0;i--)
        {
            ll m1=n1[i]-'0';
            if(n%m1!=0)
            {
                while(n%m1!=0)
                {
                    n++;
                }
            }
        }
        cout<<n<<endl;
    }
}
