#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    

     int a,b;
    cin>>a>>b;
    if(a>b && b<=12)
    {
        int x=24-a;
        cout<<"O JOGO DUROU "<<x+b<<" HORA(S)\n";
        //cout<<x+b;
    }
    else if(b>a && a<=12)
    { 
        int y=abs(a-b);
        cout<<"O JOGO DUROU "<<y<<" HORA(S)\n";
        //cout<<y;
    }
    
    else if(a==b)
    {
        cout<<"O JOGO DUROU "<<"24"<<" HORA(S)\n";
    }
  
    return 0;
}