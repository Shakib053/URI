#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int x,y;
    while(true)
    {
        cin>>x>>y;
        if(x<=0 || y<=0)
        break;
        int sum=0;
        if(x>y)
        {    
        
            for(int i=y;i<=x;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        else
        {
             for(int i=x;i<=y;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
        }
      
    }
    return 0;

}