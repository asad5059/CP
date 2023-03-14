#include <bits/stdc++.h>
using namespace std;
int a[101],b[101],c[101];
long long cnt = 0;
void f(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            int ij=0;
            for (int k = i; k < i + len; k++,ij++)
            {
                b[ij]=a[k];
            }
            for(ij=0;ij<len;ij++)
            c[ij]=b[ij];
            sort(c, c+len);
            bool f=1;
            for(int k=0;k<len;k++)
            {
                if(b[k]!=c[k])
                {
                    f=0;
                    break;
                }
            }
            if (f)
                cnt++;
        }
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        f(n);
        cout << cnt << endl;
    }
}