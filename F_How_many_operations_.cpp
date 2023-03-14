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
    ll n,f=0;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2!=0)
        f++;
    }
    if(f!=0)
    cout<<0;
    else
    {
        ll cnt=0,cnt2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cnt=0;
            while(1)
            {
                if(v[i]%2!=0)
                break;
                cnt++;
                v[i]=v[i]/2;
            }
            cnt2=min(cnt,cnt2);
        }
        cout<<cnt2;
    }
    
    
}
