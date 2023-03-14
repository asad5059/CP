#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
double c;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
bool ok(double m)
{
    return m*m+sqrt(m)>=c;
}
int main()
{
    fastio();
    cin>>c;
    double l=-1,r=1e10,mid;
    while(abs(l-r)>=1e-7)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            r=mid;
        }
        else
        l=mid;

    }
    printf("%.15f",r);
}