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
    int i, cnt, first;
    string arr;

    getline(cin, arr);

    cnt = 0;
    first = 0;
    for (i = 0; i <= arr.size(); i++)
    {

        if (((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')))
        {
            first = 1;
        }
        else
        {
            if (first)
            {
                cnt++;
                first = 0;
            }
        }
    }
    if (arr[i] == '\0' && first == 1)
    {
        cnt++;
    }
    cout << cnt << endl;
}