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
    ll n,t;
    cin>>n>>t;
    vector <ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    ll cnt=0,sum=0,mx=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        cnt=0;
        for(int j=i;j<n;j++)
        {

            if(sum+v[j]<=t)
            {
                cnt++;
            }
            else
            {
                break;
            }
            
        }
        mx=max(mx,cnt);
    }
    cout<<mx;
}
