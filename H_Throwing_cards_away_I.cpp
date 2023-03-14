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
    int n, x;
    queue<int> qu;

    while (scanf("%d", &n), n)
    {
        for (int i = 1; i <= n; i++)
        {
            qu.push(i);
        }

        printf("Discarded cards:");
        while (qu.size() > 1)
        {
            printf(" %d", qu.front());
            qu.pop();
            x = qu.front();
            qu.pop();
            if (!qu.empty())
                printf(",");
            qu.push(x);
        }
        printf("\nRemaining card: %d\n", qu.front());
        qu.pop();
    }

    return 0;
}
