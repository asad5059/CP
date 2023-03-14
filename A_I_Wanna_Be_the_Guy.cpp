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
    ll n,p,q;
    cin>>n>>p;
    set <ll> s;
    ll x;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}
