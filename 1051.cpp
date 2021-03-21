#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    double s;
    cin>>s;
    if(s>=0 && s<=2000)
    {
        cout<<"Isento\n";
    }
    else if(s>2000 && s<=3000)
    {
        double s1=abs(2000-s);
        cout<<"R$ "<<fixed<<setprecision(2)<<(8*s1)/100<<endl;
    }
    else if(s>3000 && s<=4500)
    {
        double s1=abs(3000-s);
        cout<<"R$ "<<fixed<<setprecision(2)<<((18*s1)/100)+80<<endl;
    }
    else if(s>4500)
    {
        double s1=abs(4500-s);
        cout<<"R$ "<<fixed<<setprecision(2)<<((28*s1)/100)+80+270<<endl;
    }
    
    return 0;

}