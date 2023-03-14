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
    ll sec=v[0];
    for(int i=0;i<n;i++)
    {
        sec++;
        if(v[i]==v[i+1] && i!=n-1)
        {
            sec++;
        }
        else if(v[i]<v[i+1] && i!=n-1)
        {
            sec+=v[i+1]-v[i];
        }
        else
        {
            if(i!=n-1)
            sec+=v[i]-v[i+1]+1;
        }
        
    }
    cout<<sec+1;

}