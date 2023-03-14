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
    cin>>n;
    set <ll> s;
    set <ll>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    it=s.begin();
    it++;
    if(s.size()==1) cout<<"NO";
    else
    cout<<*it;

}