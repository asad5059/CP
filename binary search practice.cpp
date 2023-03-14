//C191008
//Md. Mosleh Uddin
//4AM
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
    int a[]={1,2,2,2,3,4,5,6,7,8};
    int len=sizeof(a)/sizeof(int);
    sort(a,a+len);
    int toFind=3;
    int lo=0,hi=len-1,mid;
    while(lo<=hi)
    {
        mid = lo + (hi - lo) / 2; 
        if(a[mid]==toFind)
        break;
        else if(a[mid]>toFind)
        {
            hi=mid-1;
        }
        else
        lo=mid+1;
    }
    cout<<a[mid]<<" found at position "<<mid+1;
}