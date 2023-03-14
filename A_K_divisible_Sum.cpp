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
        ll n,k;
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<1<<"\n";
        }
        else if(n>k && n%k!=0)
        {
            cout<<2<<"\n";
        }
        else if(k>n && k%n==0)
        {
            cout<<k/n<<"\n";
        }
        else
        {
            cout<<(k/n)+1<<"\n";
        }
    }
}
