#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int sum=0,x;
    cin>>x;
    while(1)
   {
       int y;
       cin>>y;
       if(y>0)
       {
           for(int i=x;i<x+y;i++)
           {
             sum=sum+i;
           }
           cout<<sum<<endl;
           break;
       }
   }
   
    return 0;

}