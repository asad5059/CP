#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, tot;
        cin >> n >> k;
        tot = 2 * n;
        vector<pair<ll, ll>> v;
        set <pair<ll,ll>> s;
        ll vis[2 * n + 1];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < k; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.pb({min(x,y),max(x,y)});
            vis[x] = y;
            vis[y] = x;
        }

        for (ll i = 1; i <= 2 * n; i++)
        {
            ll x,y;
            if (vis[i] == 0)
            {
                ll p = i + n-1,q;
                q=p;
                bool f = 0;
                while (!f && p <= tot && q>=1)
                {
                    if(vis[q]==0)
                    {
                        x=min(i,q);
                        y=max(i,q);
                        v.pb({x,y});
                        vis[q]=i;
                        vis[i]=q;
                        f=1;
                        break;
                    }
                    if (vis[p] == 0)
                    {
                        vis[p]=i;
                        vis[i]=p;
                        x=min(i,p);
                        y=max(i,p);
                        v.pb({x,y});
                        f=1;
                        break;
                    }
                    p++;
                    q--;
                }
                
            }
        }
        if(v.size()<=1)
        {
            cout<<0<<"\n";
            continue;
        }
        ll cnt=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j].ff>v[i].ff && v[j].ff>v[i].ss)
                {
                    ll k1,k2;
                    k1=max(i,j);
                    k2=min(i,j);
                    s.insert({k1,k2});
                }
            }
        }
        cnt=0;
        ll mx=-1e18;
        for(int i=0;i<v.size();i++)
        {
            ll visx[tot];
            cnt=0;
            memset(visx,0,sizeof(visx));
            for(int j=v[i].ff+1;j<v[i].ss;j++)
            {
                if(visx[j]==0)
                {
                    cnt++;
                    visx[j]=1;
                    visx[vis[j]]=1;
                }
            }
            mx=max(cnt,mx);
        }
        cout<<mx<<"\n";
    }
}