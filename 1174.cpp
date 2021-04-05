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
    double a[100];
    //double d;
    for(int i=0;i<100;i++)
    {
      cin>>a[i];

    }
     for(int i=0;i<100;i++)
    {
      if(a[i]<=10)
      cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<a[i]<<endl;
      
    }
	return 0;
}