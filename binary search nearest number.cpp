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
    int a[]={1,2,5,7,8,10,13,15};
    int len=sizeof(a)/sizeof(int);
    sort(a,a+len);
    int toFind=10,f=0;
    int lo=0,hi=len-1,mid;
    while(lo<=hi)
    {
        mid = lo + (hi - lo) / 2; 
        if(a[mid]==toFind)
        {
            f=1;
            break;
        }
        else if(a[mid]>toFind)
        {
            hi=mid-1;
        }
        else
        lo=mid+1;
    }
    if(f==1)
    cout<<a[mid]<<" found at position "<<mid+1;
    else
    {
        cout<<"Sorry.. Not found. \n";
        int closeElemrnt,mi,mx;
        if(mid==0)
        {
            cout<<"Nearest greater element : "<<a[mid]<<"\nNo smaller element found.";
            return 0;

        }
        if(mid==len-1)
        {
            cout<<"Nearest smallerr element : "<<a[mid]<<"\nNo greater element found.";
            return 0;

        }
        if(a[mid]>toFind && mid!=0 && mid!=len-1)
        {
            closeElemrnt=a[mid-1];
        }
        else
        {
            closeElemrnt=a[mid+1];
        }
        mx=max(a[mid],closeElemrnt);
        mi=min(a[mid],closeElemrnt);
        cout<<"Nearest elements greater Element : "<<mx<<
        " and \nnearest small element "<<mi<<"\n";
    }
}