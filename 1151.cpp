#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   int n;
   cin>>n;
   int f[n];
   f[0]=0;
   f[1]=1;
   //cin>>n;
   cout<<f[0]<<" "<<f[1]<<" ";
   for(int i=2;i<n;i++)
   {
       f[i]=f[i-1]+f[i-2];
       if(i==n-1)
       cout<<f[i]<<"\n";
       else
       cout<<f[i]<<" ";
   }
   
    return 0;

}