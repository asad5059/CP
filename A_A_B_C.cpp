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
    ll k;
    cin>>k;
    ll cnt = 0;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k ;j++)
        {
            for(int l=1;l<=k;l++)
            {
                if(i*j*l<=k)
                {
                    cout<<i<<" "<<j<<" "<<l<<"\n";
                }
            }
        }
    }
    //cout<<cnt;
}