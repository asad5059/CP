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
    while(t--)
    {
        ll mass,height;
        cin>>mass>>height;
        ll bmi=mass/(height*height);
        if(bmi<=18) cout<<1<<"\n";
        else if(bmi>18 && bmi<=24) cout<<2<<"\n";
        else if(bmi>24 && bmi<=29) cout<<3<<"\n";
        else cout<<4<<'\n';
    }
}