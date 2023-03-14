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
    string s;
    cin>>s;
    ll x=0,y=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a') x++;
        y++;
    }
    cout<<min(y,2*x - 1);
}
