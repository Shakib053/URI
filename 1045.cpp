#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    double x[3];
    double a,b,c;
    //cin>>a>>b>>c;
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    a=x[2];
    b=x[1];
    c=x[0];
    if(a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else if(a*a==(b*b+c*c))
    {
        cout<<"TRIANGULO RETANGULO\n";
    }
    else if(a*a>(b*b+c*c))
    {
        cout<<"TRIANGULO OBTUSANGULO\n";
    }
    else if(a*a<(b*b+c*c))
    {
        cout<<"TRIANGULO ACUTANGULO\n";
    }
    if(a==b && b==c)
    {
        cout<<"TRIANGULO EQUILATERO\n";
    }
    else if(a==b || b==c || c==a)
    {
        cout<<"TRIANGULO ISOSCELES\n";
    }
    return 0;
}