#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
	int t;
    cin>>t;
    while (t--)
    {
        int x,y,sum=0;
        cin>>x>>y;
        if(x%2!=0)
        {
        for(int i=x;i<=x+((y-1)*2);i=i+2)
        {
             if(i%2!=0)
             sum=sum+i;
        }   
        
        }
        else 
         {
        for(int i=x;i<=x+(y*2);i=i+1)
        {
             if(i%2!=0)
             sum=sum+i;
        }
         
         }
        cout<<sum<<endl;
    }
    
 
	return 0;
}