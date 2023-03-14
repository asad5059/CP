#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
        vector<ll> v(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = 0, y = v.size()-1;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                cout<<v[x]<<" ";
                x++;
            }
            else
            {
                cout<<v[y]<<" ";
                y--;
            }
            
        }
        cout<<endl;
    }
}
