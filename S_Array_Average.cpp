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
double avg(ll a[],ll pos,ll n,double sum)
{
    if(pos>=n) return sum/(double) n;
    sum+=a[pos++];
    return avg(a,pos,n,sum);
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double ans=avg(a,0,n,0);
    cout<<setprecision(6)<<fixed<<ans;

}