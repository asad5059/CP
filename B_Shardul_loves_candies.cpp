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
    ull n;
    cin>>n;
    ull x=0;
    vector <ull> v(n+1);
    for(ull i=1;i<=n;i+=2)
    {
        v[i]=1;
        v[i+1]=1;
    }
    cout<<v[n];
}
