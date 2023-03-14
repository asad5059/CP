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
    int n,x,a,b;
    double tot;
    cin>>n>>x;
    vector <double> v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        tot=(double)b/100;
        tot*=(double)a;
        v.pb(tot);
    }
    if(x==0)
    {
        cout<<1;
        return 0;
    }
    double sum=0;
    ll yy;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        yy=sum;
        if(yy>x && sum>x)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}
