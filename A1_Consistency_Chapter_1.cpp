#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB,null_type,less_equal<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void print(ll t,ll ans)
{
    cout<<"Case #"<<t<<": "<<ans<<"\n";
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //#ifndef ONLINE_JUDGE
        //freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    set <char> v={'A','E','I','O','U'};
    for(int tc=1;tc<=t;tc++)
    {
        map<char,ll> mp;
        string s;
        cin>>s;
        if(s.size()==1)
        {
            print(tc,0);
            continue;
        }
        // for(char i='A';i<='Z';i++) mp[i]+=0;
        ll vow=0,con=0;
        for(auto i:s)
        {
            mp[i]++;
            if(v.find(i)==v.end()) con++;
            else vow++;
        }
        if(vow==s.size())
        {
            print(tc,vow);
            continue;
        }
        if(con==s.size())
        {
            print(tc,con);
            continue;
        }
        ll ans=1e18;
        for(auto i:mp)
        {
            ll cnt=0;
            bool fl=(v.find(i.ff)!=v.end()?1:0);
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==i.ff) continue;
                else if(v.find(s[j])!=v.end() && fl==1)
                cnt+=2;
                else if(v.find(s[j])==v.end() && fl==0)
                cnt+=2;
                else cnt++;

            }
            ans=min(ans,cnt);
        }
        print(tc,ans);
    }
}