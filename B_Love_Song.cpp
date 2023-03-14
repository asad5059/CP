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
int a[100005];
int main()
{
    fastio();
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int j=1;
    a[0]=0;
    for(int i=0;i<n;i++)
    {
        a[j]=a[j-1]+ (s[i]-'a'+1);
        j++;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<"\n";
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<"\n";
        //prefix sum
        // a  b  a  c  a  b  a
        // 1  3  4  7  8  10 11
    }

}