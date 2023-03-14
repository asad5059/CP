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
    ll n,q;
    cin>>n;
    for(int i=3;i<=n;i+=2)
    {
        for(int j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                q=1;
                break;
            }
        }
        if(q==0) cout<<i<<" ";
        q=0; 
    }
}
