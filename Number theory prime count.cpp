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
bool prime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt>1) return false;
    else return true;
    
}
int main()
{
    fastio();
    ll n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bool f=prime(i);
        if(f) cnt++;
    }
    cout<<cnt;
}