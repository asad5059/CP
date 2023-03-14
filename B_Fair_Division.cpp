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
        int a[n],one=0,two=0,s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) one++;
            else two++;
            s+=a[i];
        }
        if((one+(2*two)&1)) cout<<"NO\n";
        else if(one&1==0 && two&1==0) cout<<"YES\n";
        else if(one&1) cout<<"NO\n";
        else if(one==0 && two&1) cout<<"NO\n";
        else if(s%2!=0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
