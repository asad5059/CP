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
	while(t--){
	    ll x1;
	    vector <ll> v;
	    for(int i=0;i<4;i++)
	    {
	        cin>>x1;
	        v.pb(x1);
	    }
	    ll x,y;
	    x=abs(v[0]-v[2]);
	    y=abs(v[1]-v[3]);
	    if(v[0]==v[2] || v[1]==v[3])
	    {
	        cout<<x+y<<endl;
	    }
	    else
	    cout<<x+y+2<<endl;
	}
}