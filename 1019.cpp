#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{  
     
   int n;
   cin>>n;
   int h,m,s;
   h=n/3600;
   n=n-(h*3600);
   m=n/60;
   n=n-(m*60);
   s=n;
   cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}