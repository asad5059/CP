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
    int r1,r2,c1,c2,d1,d2;
    int a,b,c,d;
    set <int> s;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<=9;i++)
    {
        a=i;
        for(int j=1;j<=9;j++)
        {
            b=j;
            for(int k=1;k<=9;k++)
            {
                c=k;
                for(int l=1;l<=9;l++)
                {
                    d=l;
                    s.insert(a);
                    s.insert(b);
                    s.insert(c);
                    s.insert(d);
                    if(s.size()==4 && a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2 )
                    {
                        cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<endl;
                        return 0;
                    }
                    s.clear();
                }
            }
        }
    }
    cout<<-1;
}
