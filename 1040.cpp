#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
    double a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }  
    //int x=2,y=3,z=4,p=1;
    double b,c;
    double sum=a[0]*2+a[1]*3+a[2]*4+a[3]*1;
    double avg=sum/(2+3+4+1);
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    
    if (avg>=7){
         cout<<"Aluno aprovado."<<endl;
     
    }
    else if(avg<5)
         cout<<"Aluno reprovado."<<endl;
    else if(avg>=5 && avg<=6.9){
         cout<<"Aluno em exame."<<endl;
         cin>>b;
         cout<<"Nota do exame: "<<b<<endl;
         c=(avg+b)/2;
         if(c>=5){
                cout<<"Aluno aprovado."<<endl;
         }
         else if(c<=4.9){
                cout<<"Aluno reprovado."<<endl;
         }
                cout<<"Media final: "<<fixed<<setprecision(1)<<c<<endl;
    }
    return 0;
}