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
        for(int c=0;c<5,c<r;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==6){
        for(int c=0;c<=4;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==7){
        for(int c=0;c<=3;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==8){
        for(int c=0;c<3;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==9){
        for(int c=0;c<2;c++)
        {
            sum=sum+m[r][c];
        }
    }
    if(r==10){
        for(int c=0;c<1;c++)
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
