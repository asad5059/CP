#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string t, s;
    cin >> t >> s;
    int m = s.size(), j = 0;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == t[j])
        {
            j++;
        }
    }
    cout << j + 1 << endl
}