#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
#define M 10000000
int main()
{
    int par[5],impar[5],n=15;
    int a,i=0,j=0;
    while (n--)
    {
        cin>>a;
        if(a%2==0)
        {
        par[i]=a;
        i++;
        if(i==5)
        {
            for(int i=0;i<5;i++)
            {cout<<"par["<<i<<"] = "<<par[i]<<endl;}
            i=0;
        }
        }
        else 
        {
        impar[j]=a;
        j++;
        if(j==5)
         {
            for(int j=0;j<5;j++){
            cout<<"impar["<<j<<"] = "<<impar[j]<<endl;}
            j=0;
        }
         }
    }
    for(int y=0;y<j;y++)
    cout<<"impar["<<y<<"] = "<<impar[y]<<endl;
    for(int x=0;x<i;x++)
    cout<<"par["<<x<<"] = "<<par[x]<<endl;
    
    
	return 0;
}