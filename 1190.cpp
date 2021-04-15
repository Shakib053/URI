#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{   
    char c;
    cin>>c;
    double m[12][12],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }
     for(int r=1;r<11;r++)
    {   if(r>=1 && r<=5){
        for(int c=12-1;c>=12-r;c--)
        {
            sum=sum+m[r][c];
        }
    }
     if(r>=6 && r<12){
        for(int c=r+1;c<12;c++)
        {
            sum=sum+m[r][c];
        }
    }
    
    }
    if(c=='S')
    cout<<fixed<<setprecision(1)<<sum<<endl;
    if(c=='M')
    cout<<fixed<<setprecision(1)<<sum/30<<endl;
    return 0;
}
