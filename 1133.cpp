#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    int x,y;
    cin>>x;
    cin>>y;
    vector<int>sum;
    if(x<=y)
    {
     for(int i=x+1;i<y;i++)
     {
         if(i%5==2 || i%5==3)
         {
             sum.push_back(i);
         }
     }
    }
    else
     {
     for(int i=y+1;i<x;i++)
     {
         if(i%5==2 || i%5==3)
         {
             sum.push_back(i);
         }
     }
    }
    //vector<int> sum :: iterator i;
   for(int i=0;i<sum.size();i++)
   {
       cout<<sum[i]<<endl;
   }
    return 0;

}