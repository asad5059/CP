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
    vector <ll> v(4);
    for(int i=0;i<4;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;

}
