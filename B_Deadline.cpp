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
ll n, d;
int main()
{
    fastio();
    ll t;
    cin >> t;
    rr:
    while (t--)
    {
        cin >> n >> d;
        ll l=-1,r=n,m;
        bool f=0;
        if(d<=n)
        {
            cout<<"YES\n";
            f=1;
            continue;
        }
        while(l+1<r)
        {
            m=l-(l-r)/2;
            ll x=m+ceil((double)d/(double)(m+1));
            if(x<=n)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
            else
            {
                r=m;
            }
            //cout<<m<<" "<<x<<endl;
        }
        if(!f)
        cout<<"NO\n";
    }
}