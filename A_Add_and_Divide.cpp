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
        ll a,b,x,y,mi=40;
        cin>>a>>b;
        x=a,y=b;
        ll cnt=0;
        for(int i=0;i<=32;i++)
        {
            if(b+i==1)
            continue;
            ll tmp=a,cnt=0;
            while(tmp>0)
            {
                tmp/=b+i;
                cnt++;
            }
            mi=min(cnt+i,mi);
        }
        cout<<mi<<"\n";
    }
}