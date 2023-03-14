#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,t,k=0,i=1,s=0,j,c=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ll a[n+1];
        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(j=1; j<=n;)
        {
            if(c==m)
            {
                k=max(k,s);
                j++;
                s=0;
                c=0;
                i=j;
            }
            i=i%n;
            if(i==0)i=n;
            s+=a[i];
            c++;
            i++;
        }
        cout << k << endl;
    }
}