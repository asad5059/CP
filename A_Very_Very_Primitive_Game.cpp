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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    cout<<"Takahashi";
    else if(a==b)
    {
        if(c==0)
        {
            cout<<"Aoki";
        }
        else
        cout<<"Takahashi";
    }
    else
    cout<<"Aoki";
}
