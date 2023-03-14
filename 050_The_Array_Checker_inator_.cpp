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
    ll n;
    cin>>n;
    set <ll> s1,s2;
    while(n--)
    {
        ll x;
        cin>>x;
        s1.insert(x);
    }
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        s2.insert(x);
    }
    if(s1==s2) cout<<"YES";
    else cout<<"NO";
}