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
vector <ll> vx[500];
int fx=0;
ll x;

void subseq(vector <ll> a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            // cout<<s.substr(i,j)<<endl;
            for(int k=i;k<i+j;k++)
            {
                vx[fx].pb(a[k]);
            }
            if(vx[fx].size()==x)
            {
                vx[fx].clear();
                fx--;
            }
            fx++;
        }
    }
}
int main()
{
    fastio();
    cin>>x;
    vector <ll> v(x),s;
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    subseq(v,x);
    ll ans=v[0]^v[1];
    for(int i=2;i<x;i++)
    {
        ans^=v[i];
    }
    // ll mi=ans,sz;
    // for(int i=0;i<fx;i++)
    // {
    //     s=vx[i];
    //     sz=s.size();
    //     for(int j=0;j<)
    // }
    for(auto it:vx)
    {
        for(auto ix:it)
        cout<<ix<<" ";
        cout<<endl;
    }
}