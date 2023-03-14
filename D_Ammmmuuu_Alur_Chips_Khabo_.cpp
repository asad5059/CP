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
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector <ll> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        ll mx=0,cnt=0,cnt2=0,j;
        for(int i=1;i<=n;i++)
        {
            cnt=0;
            cnt2=0;
            for(j=i;cnt2<=k;j++)
            {
                if(j>n)
                cnt+=v[j%k];
                else
                cnt+=v[j];
                cnt2++;
            }
            cout<<cnt<<" "<<j;
            mx=max(mx,cnt);
        }
        //cout<<mx<<"\n";
    }
    
}
