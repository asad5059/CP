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
void count(string s,ll i,ll cnt)
{
    ll pos=i;
    if(i==s.size())
    {
        cout<<cnt;
        return;
    }
    char c=tolower(s[i]);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cnt++;
    count(s,pos+1,cnt);
}
int main()
{
    fastio();
    string s;
    getline(cin,s);
    count(s,0,0);
}