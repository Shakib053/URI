#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    string d1,d2,p1,p2,p3,p4;
    int ds,den,a,b,c,d,e,f,rs;

    cin>>d1>>ds;
    cin>>a>>p1>>b>>p2>>c;
    
    cin>>d2>>den;
    cin>>d>>p3>>e>>p4>>f;
   
    int dss=(a*3600)+(b*60)+c;
    int dens=(d*3600)+(e*60)+f;
    int diff=dens-dss;

    if(diff>=0)
    {
    rs=den-ds;
    int p=diff;
    int h=p/3600;
    p=p-(h*3600);
    int m=p/60;
    p=p-(m*60);
    cout<<rs<<" dia(s)\n";
    cout<<h<<" hora(s)\n";
    cout<<m<<" minuto(s)\n";
    cout<<p<<" segundo(s)\n";
    }
    
    else if(diff<0)
    {
    rs=den-ds-1;
    int p1=dens+(24*3600);
    int p=abs(dss-p1);
    int h=p/3600;
    p=p-(h*3600);
    int m=p/60;
    p=p-(m*60);
    cout<<rs<<" dia(s)\n";
    cout<<h<<" hora(s)\n";
    cout<<m<<" minuto(s)\n";
    cout<<p<<" segundo(s)\n";
    }
   
    return 0;

}