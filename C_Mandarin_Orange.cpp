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
    ll n;
    cin>>n;
    vector <ll> v(n),v1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end(),greater<int>());
    v1.erase(unique(v1.begin(),v1.end()));
    ll sum,f,mx=-1;
    for(int i=0;i<v1.size();i++)
    {
        sum=0;
        f=v1[i];
        ll cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]<f)
            {
                mx=max(mx,sum);
                sum=0;
            }
            else
            {
                sum+=f;
                cnt++;
            }
        }
        mx=max(mx,sum);
    }
    cout<<mx;
}
