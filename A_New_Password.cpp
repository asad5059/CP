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
    ll n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    string s2(s,0,k);
    ll x=0;
    for(int i=0;i<n;i++)
    {
        if(x==k)
        x=0;
        cout<<s2[x];
        x++;
    }
}