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
        ll n,k,x;
        cin>>n>>k;
        set <ll> s;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        if(k==0)
        {
            cout<<s.size()<<"\n";
            continue;
        }
        ll b=*s.rbegin();
        ll a=0;
        for(auto it:s)
        {
            if(a!=it)
            break;
            a++;
        }
        if(a>b)
        {
            cout<<s.size()+k<<"\n";
            continue;
        }
        s.insert(ceil(((double)a+(double)b)/2.0));
        cout<<s.size()<<"\n";

    }
}