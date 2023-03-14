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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    ll s=v[0],cnt=1;
    for(int i=1;i<n;i++)
    {
        
        if(s<=v[i])
        {
            cnt++;
            s+=v[i];
        }
    }
    cout<<cnt;
}