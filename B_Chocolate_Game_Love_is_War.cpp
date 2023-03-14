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
ll m,n,x,y;
set <pair<ll,ll>> s;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return 0;
    return 1;
}
bool f(int a,int b)
{
    ll p=m-a, q=n-b;
    ll cnt=0;
    if(isPrime(p))
    cnt++;
    if(isPrime(q))
    cnt++;
    if(cnt==1) return 1;
    else return 0;

}
int main()
{
    fastio();
    ll cnt=0;
    cin>>m>>n>>x>>y;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(f(i,j))
            {
                s.insert({i,j});
                cout<<i<<" "<<j<<endl;

            }
            if(i!=j && f(j,i)==1 && j<=x &&)
            {
                cout<<i<<" "<<j<<endl;
                s.insert({j,i});
            }
        }
    }
    cout<<s.size()<<endl;
}