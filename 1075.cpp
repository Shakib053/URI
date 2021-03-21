#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a;
    cin>>a;
    for(int i=2;i<10000;i++)
    {
        if(i%a==2)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;

}