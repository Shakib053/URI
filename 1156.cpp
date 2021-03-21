#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   double x,y,s=0;
   for(x=1,y=1;x<=39;x=x+2,y=y*2)
   {
       s=s+(x/y);
   }
   cout<<fixed<<setprecision(2)<<s<<endl;
   
    return 0;

}