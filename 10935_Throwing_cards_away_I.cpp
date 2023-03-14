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
vector<int> v, dis;
int main()
{
    fastio();
    ll n;
    while (1)
    {
        cin>>n;
        if(n==0) return 0;
        if(n==1)
        {
            cout<<"Discarded cards: \nRemaining card: 1"<<"\n";
            continue;
        }
        v.clear();
        dis.clear();
        for (int i = 1; i <= n; i++)
        {
            v.pb(i);
        }
        while (v.size() > 1)
        {
            dis.pb(v[0]);
            v.erase(v.begin() + 0);
            v.pb(v[0]);
            v.erase(v.begin() + 0);
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < dis.size() - 1; i++)
        {
            cout << dis[i] << ", ";
        }
        cout << dis[dis.size() - 1] << endl;
        cout << "Remaining card: " << v[0] << endl;
    }
}