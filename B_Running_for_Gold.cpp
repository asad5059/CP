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
struct st
{
    ll id, a[5];
};
bool k=0;
bool cmp(struct st s1, struct st s2)
{
    ll cnt = 0, cnt2 = 0;
    for (int j = 0; j < 5; j++)
    {
        if (s1.a[j] < s2.a[j])
            cnt++;
    }
    if(cnt>=3) return 1;
    else return 0;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<struct st> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i].id = i + 1;
            for (int j = 0; j < 5; j++)
            {
                cin >> v[i].a[j];
            }
        }
        sort(v.begin(), v.end(), cmp);
        bool f=0,f1=0;
        ll cnt=0,cnt2=0;
        for(int i=1;i<n;i++)
        {
            cnt2=0;
            for(int j=0;j<5;j++)
            {
                if(v[i].a[j]<v[0].a[j])
                cnt2++;
            }
            if(cnt2>=3)
            break;
        }
        if(cnt2>=3)
        {
            cout<<-1<<"\n";
            continue;
        }
        // for(auto i:v)
        // cout<<i.id<<" ";
        cout<<v[0].id<<" ";
        cout<<"\n";
    }
}