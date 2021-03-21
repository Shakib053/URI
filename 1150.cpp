#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   
    int a,sum=0,c=0;
    cin>>a;
    while (1)
    {
        int b;
        cin>>b;
        if(b>a)
        {
            for(int i=a;i<b;i++)
            {
              sum=sum+i;
              c=c+1;
              if(sum>=b)
              {
                  cout<<c<<endl;
                  exit(0);
              }
            }
            break;
        }
    }
     
    return 0;

}