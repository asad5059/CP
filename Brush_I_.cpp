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
    for(int i=1;i<=t;i++)
    {
        ll n,x;
        cin>>n;
        ll s=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(x>0)
            s+=x;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}