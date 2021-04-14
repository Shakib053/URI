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
     for(int r=0;r<5;r++)
    {   if(r==0){
        for(int c=1;c<11;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==1){
        for(int c=2;c<10;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==2){
        for(int c=3;c<9;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==3){
        for(int c=4;c<8;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==4){
        for(int c=5;c<7;c++)
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
