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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        deque <ll> q;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
            {
                q.push_front(x);
            }
            else
            q.push_back(x);
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(q[i],2*q[j])>1)
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}