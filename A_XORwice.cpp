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
        int a,b;
        cin>>a>>b;
        int ans=min(a,b);
    
        ans=(a^ans)+(b^ans);
        cout<<ans<<endl;
    }
}