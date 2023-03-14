#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
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
    string s="ROYGBIV";
    ll x=n/7;
    for(int i=0;i<x;i++)
    {
        cout<<s;
    }
    ll r=n-x*7;
    map <int,string> mp;
    mp[1]="G";
    mp[2]="GB";
    mp[3]="OBG";
    mp[4]="OGBV";
    mp[5]="OGBVI";
    mp[6]="OGBVIG";
    cout<<mp[r];

    

}