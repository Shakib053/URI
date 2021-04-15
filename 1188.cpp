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
     for(int r=7;r<12;r++)
    {   if(r==7){
        for(int c=5;c<=6;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==8){
        for(int c=4;c<=7;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==9){
        for(int c=3;c<9;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==10){
        for(int c=2;c<=9;c++)
        {
            sum=sum+m[r][c];
        }
    }
     if(r==11){
        for(int c=1;c<=10;c++)
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
