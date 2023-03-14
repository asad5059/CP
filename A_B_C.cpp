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
        ll l,r,cnt=0,x,y,q;
        cin>>l>>r;
        if(l==r && l!=0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(l>r/2)
        {
            cout<<0<<"\n";
            continue;
        }
        q=l*2;
        q=r-q+1;
        cnt=q*(q+1)/2;
        cout<<cnt<<endl;
    }
}