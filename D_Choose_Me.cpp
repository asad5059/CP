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
    vector <pair<ll,ll>> v;
    vector <ll> sum(n),s2(n);
    vector <ll>::iterator it;
    ll x,y;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        sum.push_back(x+y);
    }
    s2=sum;
    sort(s2.begin(),s2.end(),greater<int>());
    ll cnt=0;
    bool f=true;
    ll sum_x=0;
    while(f)
    {
        ll pos=0;
        it=find(sum.begin(),sum.end(),s2[cnt]);
        pos=it-sum.end();
        ll sum_t=0;
        sum_x+=s2[cnt];
        for(int i=0;i<n;i++)
        {
            if(i!=pos)
            {
                sum_t+=v[i].ff;
            }
        }
        sum_t-=s2[cnt];
        //cout<<sum_x<<" "<<sum_t<<endl;
        if(sum_x>sum_t)
        {
            f=false;
        }
        cnt++;
    }
    cout<<cnt;
}
