#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
double Check(double a,double b,double c) {
	double s;
	double p=(a+b+c)/2;
	return s=sqrt((p-a)*(p-b)*(p-c)*p);
}
 
int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n;
        cin>>n;
        vector <double> v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
		}
		double ans=1e9+10000;
		sort(a,a+n);
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n-1; j++) {
				if(a[i]+a[j]>a[j+1]) ans=min(ans,Check(a[i],a[j],a[j+1]));
				int k=lower_bound(a+j,a+n,a[i]+a[j])-a-1;
				if(k>j&&a[k]<a[i]+a[j]) ans=min(ans,Check(a[i],a[j],a[k]));
			}
		}
		if(ans!=1e9+10000)
			printf("%.10lf\n",ans);
		else
			printf("-1\n");
	}
	return 0;
}