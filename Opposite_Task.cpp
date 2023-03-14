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
        ll n;
        cin>>n;
        if(n<11)
        cout<<0<<" "<<n<<endl;
        else
        cout<<n-10<<" "<<10<<endl;
    }
}