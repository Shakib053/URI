#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    

   double s=0;
   for(double i=1;i<=100;i++)
   {
     s=s+(1/i);
   }
   cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;

}