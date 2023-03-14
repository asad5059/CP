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
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> v(n);
        for(auto &x:v) cin>>x;
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]%3]++;
        }
        for(auto it:mp)
        {
            if(it.ss<n/3)
            {
                
            }
        }
    }
}