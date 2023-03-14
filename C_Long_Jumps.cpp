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
        ll n;
        cin>>n;
        vector <ll> v(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v2=v;
        ll sc=-INT_MAX;
        for(int i=0;i<n;i++)
        {
            ll p=i;
            p+=v[i];
            sc=max(sc,i);
            while(p<=i)
            {
                p+=v[i+v[i]];
                sc=max(sc,sc+v[i]);
            }
        }
        cout<<sc<<endl;
    }
}
