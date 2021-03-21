#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
     int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<3;j++)
    {
       b[j]=a[j];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout<<b[j]<<endl;
    }
    return 0;
}