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
    ll x,r,g1=0,g2=0;
    cin>>x;
    string gs1,gs2;
    while(x)
    {
        r=x%10;
        gs1+=r+'0';
        x/=10;
    }
    int cnt=1;
    for(int i=gs1.size()-1;i>=0;i--)
    {
        g1+=(gs1[i]-'0')*cnt;
        cnt*=10;
    }
    cout<<g1;

}