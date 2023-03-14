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
        ll n,d,count=0;
        cin>>n>>d;
        vector <ll> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]>d) count++;
        }
        sort(vec.begin(),vec.end());
        if(vec[0]+vec[1]<=d || count==0)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
