#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a[5];
    int count=0,odd=0,ps=0,ng=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
        else if(a[i]%2!=0)
        { 
            odd=odd+1;

        }
        else if(a[i]>0)
        {
            ps=ps+1;
        }
        else if(a[i]<0)
        {
            ng=ng+1;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            ps=ps+1;
        }
        else if(a[i]<0)
        {
            ng=ng+1;
        }
    }
    cout<<count<<" valor(es) par(es)\n";
    cout<<odd<<" valor(es) impar(es)\n";
    cout<<ps<<" valor(es) positivo(s)\n";
    cout<<ng<<" valor(es) negativo(s)\n";
    return 0;

}