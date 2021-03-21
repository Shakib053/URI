#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   while(1)
   {
   int n;
   cin>>n;
   if(n==0)
   return 0;
   else{
       for(int i=1;i<=n;i++)
       {   
           cout<<i;
           if(i!=n)
           cout<<" ";
           else 
           cout<<"\n";
       }
   }
   }
    return 0;

}