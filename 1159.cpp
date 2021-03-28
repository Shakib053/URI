#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
    
    
    while (1)
    {    int x,sum=0;
         cin>>x;
    
        if (x==0)
        return 0;
        if(x%2!=0)
        {
            for(int i=x+1;i<x+2*5;i=i+2)
            sum=sum+i;
        }
        else
        {
            for(int i=x;i<x+2*5;i=i+2)
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    
	return 0;
}