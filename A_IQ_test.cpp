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
    char c[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> c[i][j];
        }
    }
    ll cnt = 0;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cnt = 0;
            if (c[i][j] == '#' && j == 0)
            {
                cnt = 0;
                if (c[i][j + 1] != '#')
                    cnt++;
                if (c[i - 1][j] != '#')
                    cnt++;
                if (c[i - 1][j + 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }

                cnt = 0;
                if (c[i][j + 1] != '#')
                    cnt++;
                if (c[i + 1][j] != '#')
                    cnt++;
                if (c[i + 1][j + 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
            else if (c[i][j] == '#' && j == 3)
            {
                cnt = 0;
                if (c[i][j - 1] != '#')
                    cnt++;
                if (c[i - 1][j] != '#')
                    cnt++;
                if (c[i - 1][j - 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }

                cnt = 0;
                if (c[i][j - 1] != '#')
                    cnt++;
                if (c[i + 1][j] != '#')
                    cnt++;
                if (c[i + 1][j - 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
            else if (c[i][j] == '#' && j == 1)
            {
                cnt = 0;
                if (c[i][j + 1] != '#')
                    cnt++;
                if (c[i - 1][j] != '#')
                    cnt++;
                if (c[i - 1][j + 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }

                cnt = 0;
                if (c[i][j + 1] != '#')
                    cnt++;
                if (c[i + 1][j] != '#')
                    cnt++;
                if (c[i + 1][j + 1] != '#')
                    cnt++;

                if (cnt <= 1)
                {
                    cout << "YES";
                    return 0;
                }

                ///new
            }
            cnt = 0;
                if (c[i][j] == '.' && j == 0)
                {
                    cnt = 0;
                    if (c[i][j + 1] != '.')
                        cnt++;
                    if (c[i - 1][j] != '.')
                        cnt++;
                    if (c[i - 1][j + 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }

                    cnt = 0;
                    if (c[i][j + 1] != '.')
                        cnt++;
                    if (c[i + 1][j] != '.')
                        cnt++;
                    if (c[i + 1][j + 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }
                }
                else if (c[i][j] == '.' && j == 3)
                {
                    cnt = 0;
                    if (c[i][j - 1] != '.')
                        cnt++;
                    if (c[i - 1][j] != '.')
                        cnt++;
                    if (c[i - 1][j - 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }

                    cnt = 0;
                    if (c[i][j - 1] != '.')
                        cnt++;
                    if (c[i + 1][j] != '.')
                        cnt++;
                    if (c[i + 1][j - 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }
                }
                else if (c[i][j] == '.' && j == 1)
                {
                    cnt = 0;
                    if (c[i][j + 1] != '.')
                        cnt++;
                    if (c[i - 1][j] != '.')
                        cnt++;
                    if (c[i - 1][j + 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }

                    cnt = 0;
                    if (c[i][j + 1] != '.')
                        cnt++;
                    if (c[i + 1][j] != '.')
                        cnt++;
                    if (c[i + 1][j + 1] != '.')
                        cnt++;

                    if (cnt <= 1)
                    {
                        cout << "YES";
                        return 0;
                    }
        }
    }

    //cout<<"C ["<<i+1<<"] ["<<j+1<<"] : "<<cnt<<endl;
}
cout << "NO";
}
