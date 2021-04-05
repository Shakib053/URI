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
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<4;i++)
    {
        if(a[i]==1)
        {
        cout<<i+1<<endl;
        return 0;
        
    }
    }
	return 0;
}
