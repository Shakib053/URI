#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{  
     double a,b,c,x,x1,x2;
     cin>>a>>b>>c;
     x=(b*b-4*a*c);
     
     if(a!=0 && x>0)
     {
    double d=sqrt(x);
     x1=(-b+d)/(2*a);
     x2=(-b-d)/(2*a);
     cout<<"R1 = "<<fixed<<setprecision(5)<<x1<<endl;
     cout<<"R2 = "<<fixed<<setprecision(5)<<x2<<endl;
     }
     else {
         cout<<"Impossivel calcular\n";
     }
    return 0;
}