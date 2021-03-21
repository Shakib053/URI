#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a=0,g=0,d=0;
    while(1)
    {
    int x;
    cin>>x;
    if(x>=1 && x<4)
    {
       if(x==1)
       a=a+1;
       else if(x==2)
       g=g+1;
       else if(x==3)
       d=d+1;
    }
    else if(x==4)
    {   
        cout<<"MUITO OBRIGADO\n";
        cout<<"Alcool: "<<a<<endl;
        cout<<"Gasolina: "<<g<<endl;
        cout<<"Diesel: "<<d<<endl;
        break;
    }
    }
    return 0;

}