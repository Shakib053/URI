#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int x,y;
    cin>>x>>y;
    
    int sum=0;
    for(int i=x-1;i>y;i--)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    
    cout<<sum<<endl;
    return 0;

}