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
       ll int a,b,sum=0;
       double c,d;
       cin>>a>>b>>c>>d;
       while (a<=b)
       {
       a=a*((c/100)+1);
       b=b*((d/100)+1);
       sum++;
       if(sum>100)
       {
       cout<<"Mais de 1 seculo.\n";
       break;
       }
       }
       if(sum<=100)
       cout<<sum<<" anos."<<endl;
     
       }
    
    
	return 0;
}