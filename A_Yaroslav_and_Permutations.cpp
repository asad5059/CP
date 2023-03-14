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
    ll n,x;
    cin >> n;
    map<ll, ll> mp;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        mp[x]++;
    }
    if (n%2!=0)
    {

        x = (n / 2) + 1;
        //cout<<"X = "<<x<<"\n";
        for (auto it : mp)
        {
            if (it.ss > x)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        x = n / 2;
        for (auto it : mp)
        {
            if (it.ss > x)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}
