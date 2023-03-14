#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<2<<endl;
        for(int i=n-1;i>0;i--)
        {
            cout<<n<<" "<<i<<endl;
            n=(n+i+1)/2;
        }
        
    }
}