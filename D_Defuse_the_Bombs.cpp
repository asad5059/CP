#include <bits/stdc++.h>
#define int ll
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;
const int mod=998244353;

int a[maxn];
int t=0;
int n;
bool check(int x){
    int res=x;
    for(int i=1;i<=n;i++){
        if(a[i]>=x) continue;
        res-=x-a[i];
        if(res<=0) break;
    }
    return res>0;
}

void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],++a[i];
    int l=0,r=1e18;
    while (l<r){
        int mid = (r + l + 1) >> 1;
        if(check(mid)) l=mid;
        else r=mid-1;
    }
    cout<<"Case #"<<t<<": "<<l<<"\n";
}

int main() {
    int _ = 1;
    cin >> _;
    while (_--) {
        t++;
        solve();
    }
}