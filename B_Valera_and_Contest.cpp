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
    ll n, k, l, r, sall, sk, snk;
    cin >> n >> k >> l >> r >> sall >> sk;
    ll ans[n],ind=sk/k;
    memset(ans,0,sizeof(ans));
    snk=sall-sk;
    for (int i = 0; i < k-1; i++)
    {
        ans[i] =max(ind,l);
        sk-=ans[i];
    }
    if(sk>r)
    {
        int i=0;
        while(sk>r)
        {
            if(i==k-1) i=0;
            ans[i]++;
            sk--;
            i++;
        }
        ans[k-1]=sk;
    }
    else
    ans[k-1]=sk;
    int i=k;
    while(snk>0)
    {
        if(i==n) i=k;
        if(ans[i]+1<=r)
        ans[i]++,snk--;
        i++;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}