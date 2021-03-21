#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int n,total=0,c=0,r=0,s=0;
    cin>>n;
    while(n--)
    {
        int t;
        char p;
        cin>>t>>p;
        total=total+t;
        if(p=='C')
        {
            c=c+t;
        }
        else if(p=='R')
        {
            r=r+t;
        }
        else if(p=='S')
        {
            s=s+t;
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(double)(c*100)/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(double)(r*100)/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(double)(s*100)/total<<" %"<<endl;
    return 0;

}