#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    

    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
    }
    else {
        double d=((a+b)*c)/2;
        cout<<"Area = "<<fixed<<setprecision(1)<<d<<endl;
    }
    return 0;
}