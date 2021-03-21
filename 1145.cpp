#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    int x,y,c=0;
    cin>>x>>y;
    for(int i=1;i<=y;i=i+1)
    {
        cout<<i;
        c=c+1;
        if(c!=x)
        cout<<" ";
        //c=c+1;
        else
        {
        cout<<"\n";
        c=0;
        }
    }
    
    return 0;

}