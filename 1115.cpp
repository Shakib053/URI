#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    while(1)
    {
        int x,y;
        cin>>x>>y;
        if(x==0 || y==0)
        break;
        else if(x>0 && y>0)
        cout<<"primeiro\n";
        else if(x>0 && y<0)
        cout<<"quarto\n";
        else if(x<0 && y<0)
        cout<<"terceiro\n";
        else if(x<0 && y>0)
        cout<<"segundo\n";
    }
    return 0;

}