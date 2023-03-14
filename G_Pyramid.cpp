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
void py(int n,int cnt,int cnt2)
{
    for(int i=1;i<=n-1;i++)
    cout<<" ";
    for(int i=1;i<=cnt2;i++)
    cout<<"*";
    cout<<endl;
    if(cnt2==cnt)
    return;
    cnt2+=2;
    py(n-1,cnt,cnt2);
}
int main() {
	fastio();
	ll n,cnt=1;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
	    cnt+=2;
	}
	py(n,cnt,1);
}

