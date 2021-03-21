#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    double a[6],sum=0;
    int count=0;
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            count=count+1;
            sum=sum+a[i];
        }
    }
    cout<<count<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<sum/count<<"\n";
    return 0;

}