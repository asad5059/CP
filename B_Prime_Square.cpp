#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 1;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n*n; i++)
        {
            if (i == x || i == y || i == (n * n) - n)
            {
                cout << 1<<" ";
                cnt++;
                if (cnt == n)
                {
                    cout << endl;
                    cnt = 0;
                }
                if(i==x)
                x=x+n+1;
                else if(i==y)
                y=y+n+1;
            }
            else
            {
                cout<<0<<" ";
                cnt++;
                if(cnt==n)
                {
                    cout<<endl;
                    cnt=0;
                }
            }
            
        }
    }
}