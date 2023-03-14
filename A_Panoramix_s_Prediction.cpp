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
    int a[]={2,3,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int x,y,l;
    l=sizeof(a)/sizeof(int);
    cin>>x>>y;
    for(int i=0;i<l;i++)
    {
        if(x==a[i] && a[i+1]==y)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
