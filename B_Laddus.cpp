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
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll a=0,b=0,pos;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(v[0]>v[v.size()-1])
            {
                a+=v[0];
                v.erase(v.begin()+0);
            }
            else
            {
                a+=v[v.size()-1];
                v.erase(v.begin()+v.size()-1);
            }
            
        }
        else
        {
            if(v[0]>v[v.size()-1])
            {
                b+=v[0];
                v.erase(v.begin()+0);
            }
            else
            {
                b+=v[v.size()-1];
                v.erase(v.begin()+v.size()-1);
            }
        }
        
    }
    cout<<a<<" "<<b;
}
