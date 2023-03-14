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
    ll n,k,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        char x;
        int y;
        cin>>x>>y;
        if(x=='+')
        k+=y;
        else if(x=='-')
        {
            if(k-y<0)
            cnt++;
            else
            {
                k-=y;
            }
            
        }
    }
    cout<<k<<" "<<cnt;
}
