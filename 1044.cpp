#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    

    int a,b,big,small;
    cin>>a>>b;
    if(a>b)
    {
        big=a;
        small=b;
    }
    else {
        big=b;
        small=a;
    }
    if(big%small==0)
    {
        cout<<"Sao Multiplos\n";
    }
    else {
        cout<<"Nao sao Multiplos\n";
    }
    return 0;
}