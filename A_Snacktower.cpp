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
    ll n;
    cin >> n;
    vector<ll> v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v1 = v;
    ll j = 0, c = 0;
    sort(v1.begin(), v1.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (v1[j] != v[i])
        {
            c++;
            cout<<endl;
        }
        else if (v1[j] == v[i])
        {
            
            cout << v1[j] << " ";
            j++;
            while (c)
            {
                cout << v1[j] << " ";
                c--;
                j++;
            }
            cout<<endl;
        }
    }
}