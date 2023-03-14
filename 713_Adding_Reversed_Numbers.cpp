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
const ll mod = 1e9+7;

ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
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
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a.size()<b.size()) swap(a,b);
        ll carry=0;
        deque<string> ans;
        for(int i=0;i<max(a.size(),b.size());i++)
        {
            ll d1=-1, d2=-1,r,sum;
            if(i<a.size() && i<b.size())
            {
                d1=a[i]-'0', d2=b[i]-'0';
                sum=d1+d2+carry;
                if(sum<10)
                {
                    ans.push_front(to_string(sum));
                    carry=0;
                }
                else
                {
                    r=sum%10;
                    ans.push_front(to_string(r));
                    carry=(sum/10);
                }
            }
            else
            {
                d1=a[i]-'0';
                if(carry>0)
                {
                    sum=d1+carry;
                    if(sum>9)
                    {
                        r=sum%10;
                        ans.push_front(to_string(r));
                        carry=(sum/10);
                    }
                    else
                    {
                        ans.push_front(to_string(sum));
                        carry=0;
                    }
                }
                else
                {
                    ans.push_front(to_string(d1));
                    carry=0;
                }
            }
        }
        if(carry>0)
        {
            ans.push_front(to_string(carry));
        }
        bool f=0;
        reverse(ans.begin(),ans.end());
        for(auto i:ans)
        {
            if(!f)
            {
                for(int j=0;j<i.size();j++)
                {
                    if(i[j]>'0')
                    {
                        f=1;
                    }
                    if(f)
                    cout<<i[j];
                }
            }
            else
            cout<<i;
        }
        cout<<"\n";
    }
}

//  43          12
// + 9
// ______
//  52