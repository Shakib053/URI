#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{  
     
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sumcd=c+d;
    int sumab=a+b;
    
    if((b>c && d>a) && (sumcd>sumab) &&(c>0 && d>0 ) && a%2==0)
    {
        cout<<"Valores aceitos\n";
    }
    else {
        cout<<"Valores nao aceitos\n";
    }
    return 0;
}