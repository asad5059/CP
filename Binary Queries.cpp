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
    ll x,l,r,n,q,b;
    cin>>n>>q;
    vector <int> v(n);
    for(auto &x:v) cin>>x;
    while(q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>b;
            if(v[b-1]==0)
            v[b-1]=1;
            else
            v[b-1]=0;
        }
        else if(x==0)
        {
            cin>>l>>r;
            if(v[r-1]==0)
            cout<<"EVEN\n";
            else
            cout<<"ODD\n";
        }
    }
}