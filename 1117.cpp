#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int c=0;
    double r=0;
    while (1)
    {
        
        double x;
        cin>>x;
        if(x>=0 && x<=10)
        {
        c=c+1;
        r=r+x;
        }
        else
        {
         cout<<"nota invalida\n";
        }
        if(c==2)
        {
        cout<<"media = "<<fixed<<setprecision(2)<<r/2<<endl;
        break;
        }
    }
    
    
    return 0;

}