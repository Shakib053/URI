#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    int x,y,sum=0;
    cin>>x;
    cin>>y;
    if(x<=y)
    {
     for(int i=x;i<=y;i++)
     {
         if(i%13!=0)
         {
             sum=sum+i;
         }
     }
    }
    else
     {
     for(int i=y;i<=x;i++)
     {
         if(i%13!=0)
         {
             sum=sum+i;
         }
     }
    }
    cout<<sum<<endl;
    return 0;

}