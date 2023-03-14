#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll n,q,x;
    cin>>n>>q;
    deque <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        cin>>x;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                cout<<i+1<<" ";
                v.erase(v.begin()+i);
                v.push_front(x);
                // for(auto it:v)
                // cout<<it<<" ";
                // cout<<endl;
                break;
            }
        }
    }
}