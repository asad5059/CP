#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int h, w, x, y;
        cin >> h >> w >> x >> y;
        char c[h][w];
        vector<char> v;
        for (int i = 0; i < h; i++)
         {
                for (int j = 0; j < w; j++)
        {
                        cin >> c[i][j];
                   
        }
    }
        int i, k, j = 0;
        while (j < w)
   
    {
               if (c[x - 1][j] == '.')
        {
                      v.push_back(c[x - 1][j]);
                    if (c[x - 1][j + 1] == '#')
             break;
        }
                j++;
           
    }
        //cout<<v.size()<<endl;
    i = x - 2;
        while (i >= 0)
   
    {
                if (c[i][y - 1] == '#')
        {
                        break;
        }
                else
        {
                        v.push_back(c[i][y - 1]);
        }
                    i--;
           
    }
        k = x - 1 + 1;
        while (k < h)
   
    {
                if (c[k][y - 1] == '#')
        {
                        break;
        }
                else
        {
                        v.push_back(c[k][y - 1]);
        }
                    k++;
           
    }
        cout << v.size() << endl;
}