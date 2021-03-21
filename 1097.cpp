#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a=7,b,j;
    for(int i=1;i<=9;i=i+2)
    {
        for(b=1,j=a;b<=3;b++,j--)
        {
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        a=a+2;
    }
    return 0;

}