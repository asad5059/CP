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
    ll n, m;
    cin >> n >> m;
    ll k = (n / m);
    if (m==1)
        cout << (k * (k - 1) / 2) << " ";
    else
    {
        if(n/2==m)
        cout<<n/2<<" ";
        else if(n/2<m)
        {
            if(n%2==0)
            {
                cout<<n/2-(m-n/2)<<" ";
            }
            else
            {
                cout<<n/2-((m-1)-n/2)<<" ";
            }
        }
        else
        {
            k=n/m;
            if(n%m==0)
            cout<<m*(k*(k-1)/2) <<" ";
            else
            {
                cout<<(m-(n%m))*(k*(k-1)/2)+((n%m)*(k)*(k+1)/2)<<" ";
            }
        }
    }   
    k = n - (m - 1);
    cout << k * (k - 1) / 2;
}
