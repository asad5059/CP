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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    set <ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    if(s.size()<k)
    cout<<"NO\n";
    else
    {
        ll cnt=0;
        cout<<"YES\n";
        for(auto it:s)
        {
            for(int i=0;i<n;i++)
            {
                if(v[i]==it)
                {
                    cout<<i+1<<" ";
                    cnt++;
                    break;
                }
            }
            if(cnt==k)
            break;
        }
    }
}