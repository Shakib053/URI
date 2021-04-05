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
    int a,b;
    string s;
    cin>>a>>b;
    while (b--)
    {
        cin>>s;
        if(s=="fechou")
        a=a+1;
        else if(s=="clicou")
        a=a-1;
    }
    cout<<a<<endl;
    
	return 0;
}
