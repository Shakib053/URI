#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    while(true)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<"Decrescente\n";
        }
        else if(x<y)
        {
            cout<<"Crescente\n";
        }
        if(x==y)
        break;
    }
    
    return 0;

}