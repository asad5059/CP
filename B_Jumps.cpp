#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <vector>
#include <stack>
#include <set>
#define int long long
using namespace std;
typedef long long ll;
const int maxn=2e5+50;
const int inf=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
const int HASH=131;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,tmp=0;
        for (i = 1;n > tmp; ++i) {
            tmp+=i;
        }
        int ans;
        if (tmp-n!=1)
            ans=i;
        else
            ans=i+1;
        cout<<ans-1<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

    }
}