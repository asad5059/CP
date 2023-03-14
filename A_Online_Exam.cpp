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
    string a,b,c;
    cin>>a>>b>>c;
    if(a[a.size()-1]==b[0] && b[b.size()-1]==c[0])
    cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
}
