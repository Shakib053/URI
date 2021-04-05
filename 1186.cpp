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
    double a[12][12];
    char k;
    double sum=0;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<12;i++)
        {
            for(int j=11;j>11-i;j--)
            
            {
                sum=sum+a[i][j];
            }
        }
    if(k=='S')
    {
        cout<<sum<<endl;
    }
    else if(k=='M')
    cout<<fixed<<setprecision(1)<<sum/66<<endl;
   
	return 0;
}