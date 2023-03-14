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
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string r,b;
        cin>>r>>b;
        ll por=0,pob=0;
        for(int i=0;i<n;i++)
        {
            if(r[i]-'0'>b[i]-'0')
            por++;
            else if(b[i]-'0'>r[i]-'0')
            pob++;
        }
        if(por>pob)
        cout<<"RED\n";
        else if(pob>por)
        cout<<"BLUE\n";
        else
        {
            cout<<"EQUAL\n";
        }
        
    }
    
}
