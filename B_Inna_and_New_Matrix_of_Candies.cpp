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
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool f = 0;
    ll  mi = -1e18, sw = 0, cnt = 0;
    set <ll> s;
    for (int i = 0; i < n; i++)
    {
        sw = 0;
        cnt = 0;
        mi=-1e18;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'G' && sw == 0)
            {
                sw = 1;
            }
            else if(sw==1)
            {
                if (a[i][j] == '*' && sw==1)
                    cnt++;
                else if (a[i][j] == 'S' && sw==1)
                {
                    cnt++;
                    mi = max(mi, cnt);
                    s.insert(mi);
                    f = 1;
                    break;
                }
            }
            if(a[i][j]=='S' && sw==0)
            {
                cout<<-1;
                return 0;
            }
        }
    }
    if(!f) mi=-1;
    cout <<s.size() ;
}