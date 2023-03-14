#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string a,o;
    ll b;
    while(cin>>a>>o>>b)
    {
        if(o=="%")
        {
            ll mod=0;
            for(int i=0;i<a.size();i++)
            {
                mod=((mod*10)+a[i]-'0')%b;
            }
            cout<<mod<<endl;
        }
        else if(o=="/")
        {
            ll val=0,rem=0,cnt=0,f=0;
            for(int i=0;i<a.size();i++)
            {
                val=(val*10)+a[i]-'0';
                if(val/b!=0)
                {
                    f=0;
                }
                if(!f)
                {
                    cout<<val/b;
                    val %= b;
                }
            }
           if(f)
           cout<<0<<endl;
           else
           {
               cout<<endl;
           }
        }
    }
}