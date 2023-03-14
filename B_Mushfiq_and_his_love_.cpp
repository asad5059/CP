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
    int n, k;
    cin>>n>>k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    sort(a, a + n);
    if (k > n)
        printf("-1");
    else
    {
        printf("%d 0", a[n - k]);
    }
}
