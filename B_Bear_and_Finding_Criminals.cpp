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
    ll n,a;
    cin>>n>>a;
    a--;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll cnt=0;
    if(v[a]==1) cnt++;
    ll k=1;
    while(k+a<n || a-k>=0)
    {
        if(v[a+k]==1 && v[a-k]==1)
        {
            // cout<<"At pos"<<a+k<<" and "<<a-k<<endl;
            cnt+=2;
        }
        else if(v[a+k]==1 && a-k<0) 
        {
            // cout<<"At pos "<<a+k<<endl;
            cnt++;
        }
        else if(v[a-k]==1 && a+k>=n) 
        {
            // cout<<"at pos "<<a-k<<endl;
            cnt++;
        }
        k++;
    }
    cout<<cnt;

}