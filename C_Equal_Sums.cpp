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
    ll k,n,x;
    cin>>k;
    vector <ll> v[k];
    for(int i=0;i<k;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            v[i].pb(x);
        }
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}