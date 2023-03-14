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
int to_bin(ll n)
{
    ll cnt=0;
    while(n)
    {
        int r=n%2;
        n/=2;
        if(r==1) cnt++;
    }
    return cnt;
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>n;
        ll cnt1=to_bin(n);
        ll cnt2=0;
        while(cnt2!=cnt1)
        {
            n++;
            cnt2=to_bin(n);
        }
        cout<<"Case "<<i<<": "<<n<<endl;
    }
}