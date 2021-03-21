#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    double a;
    int b;
    cin>>a;
    b=a/100;
    if(a>=0 && a<=400)
    {
       
       cout<<"Novo salario: "<<fixed << setprecision(2)<<(15*b)+a<<endl;
       double b1=(double)15*b;
       cout<<"Reajuste ganho: "<<fixed << setprecision(2)<<b1<<endl;
       cout<<"Em percentual: 15 %"<<endl;
    }
     else if(a>=400.01 && a<=800)
    {

       cout<<"Novo salario: "<<fixed << setprecision(2)<<(12*b)+a<<endl;
       double b1=(double)12*b;
       cout<<"Reajuste ganho: "<<fixed << setprecision(2)<<b1<<endl;
       cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>=800.01 && a<=1200.00)
    {

       cout<<"Novo salario: "<<fixed << setprecision(2)<<(10*b)+a<<endl;
       double b1=(double)10*b;
       cout<<"Reajuste ganho: "<<fixed << setprecision(2)<<b1<<endl;
       cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>=1200.01 && a<=2000.00)
    {

       cout<<"Novo salario: "<<fixed << setprecision(2)<<(7*b)+a<<endl;
       double b1=(double)7*b;
       cout<<"Reajuste ganho: "<<fixed << setprecision(2)<<b1<<endl;
       cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000)
    {

       cout<<"Novo salario: "<<fixed << setprecision(2)<<(4*b)+a<<endl;
       double b1=(double)4*b;
       cout<<"Reajuste ganho: "<<fixed << setprecision(2)<<b1<<endl;
       cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;

}