#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int x1=0,y1=0,d=0,g=0;
    while(1)
    {
        int x,y,z;
        cin>>x>>y;
        g=g+1;
        if(x==y)
        {
            d=d+1;
        }
        else if(x>y)
        {
            x1=x1+1;
        }
        else if(x<y)
        {
            y1=y1+1;
        }
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>z;
        
        if(z==2)
        {   
            cout<<g<<" grenais\n";
            cout<<"Inter:"<<x1<<endl;
            cout<<"Gremio:"<<y1<<endl;
            cout<<"Empates:"<<d<<endl;
            if(x1>y1)
            {
              cout<<"Inter venceu mais\n";
            }
            else if(x1<y1)
            {
              cout<<"Gremio venceu mais\n";
            }
            else if(x1==y1)
            {  
                cout<<"Não houve vencedor\n";

            }
            break;
        }

    }
    return 0;

}