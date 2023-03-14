#include<bits/stdc++.h>
using namespace std;
char s[1550],s1[1550];
int main()
{
    map<string,string> m;
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        gets(s);
        gets(s1);
        m[s]=s1;
    }
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        gets(s1);
        cout<<m[s1]<<endl;
    }
}