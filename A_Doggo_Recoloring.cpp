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
    string s;
    cin>>s;
    if(n==1) cout<<"Yes";
    else
    {
        set <char> st;
        for(int i=0;i<n;i++) st.insert(s[i]);
        if(st.size()<s.size()) cout<<"Yes";
        else cout<<"No";
    }
    
}
