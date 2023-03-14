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
ll n, p,mod=1000000007;
ll mat[100][100], id[100][100];
void mul(ll a[][100],ll b[][100])
{
    ll res[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {   
                ll kx=(a[i][k]%mod*b[k][j]%mod)%mod;
                res[i][j]=(res[i][j]%mod + kx%mod)%mod;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            id[i][j]=res[i][j];
        }
    }
}
void matpow(ll a[][100],ll k)
{
    
    while(k)
    {
        if(k%2)
        {
            k--;
            mul(a,id);
        }
        else
        {
            mul(a,a);
            k/=2;
        }
    }
    
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> p;
        memset(mat,0,sizeof(mat));
        memset(id,0,sizeof(id));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (i == j)
                    id[i][j] = 1;
                else
                    id[i][j] = 0;
            }
        }
        matpow(mat,p);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << id[i][j] << " ";
            }
            cout << "\n";
        }
    }
}