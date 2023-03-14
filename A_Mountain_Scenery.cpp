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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(2*n+1);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    for(int i=1;k!=0;i++)
    {
        if(i==v.size())
        i=0;
        if(v[i]-1>v[i-1] && v[i]-1>v[i+1])
        {
            v[i]--;
            k--;
        }
    }
    for(auto it:v)
    cout<<it<<" ";
}
