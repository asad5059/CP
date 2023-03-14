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
ll mat[101][101], imat[101][101]; // imat = identity matrix

void power(ll a[][101], ll dim, ll n)
{
    ///initializing identity matrix
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (i == j)
                imat[i][j] = 1;
        }
    }
    /*   1 0 0
         0 1 0
         0 0 1
                 */
    
}
int main()
{
    fastio();
    ll dim, n; //dim = dimenstion of the matrix. We will calc mat^n
    cin >> dim >> n;
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            cin >> a[i][j]; //our mat is : mat[dim][dim]
        }
    }
}