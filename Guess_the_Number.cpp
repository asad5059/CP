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
    vector <ll> ans;
    for(int i=1;i<=1000;i++)
    {
        ans.pb(i*i);
    }
    ll t;
    cin>>t;
    r:
    while(t--)
    {
        cout<<flush;
        int i=0;
        cout<<ans[i]<<endl;
        ll x;
        bool f=0;
        while(1)
        {
            cout<<flush;
            cin>>x;
            if(x==1)
            {
                f=1;
                break;
            }
            else if(x==0)
            continue;
            else if(x==-1)
            return 0;
            cout<<ans[i++]<<endl;
        }
        if(f)
        continue;
    }
}