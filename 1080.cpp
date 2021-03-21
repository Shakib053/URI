#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   int a[100];
   for(int i=0;i<100;i++)
   {
       cin>>a[i];
   }
    
    cout<<*max_element(a,a+100)<<endl;
    for(int i=0;i<100;i++)
    {
        if(*max_element(a,a+100)==a[i])
        cout<<i+1<<endl;
        
    }
    
    return 0;

}