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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n),v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>v2[j];
    }
    ll cnt=0,pos=0,f=0;
    for(int i=0;i<m;i++)
    {
        ll cur=v2[i];
        for(int j=pos;j<v.size();j++)
        {
            if(cur>=v[j])
            {
                cnt++;
                pos=j+1;
                f=0;
                break;
            }
            else
            {
                f=1;
            }
            
        }
        if(f==1)
        break;
    }
    cout<<cnt<<endl;
}
