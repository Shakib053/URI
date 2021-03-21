#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   double x1,y1,x2,y2;
   cin>>x1>>y1;
   cin>>x2>>y2;
    double a=(x2-x1)*(x2-x1);
    double b=pow((y2-y1),2);
   
    cout<<fixed<<setprecision(4)<<sqrt(a+b)<<endl;
    return 0;

}