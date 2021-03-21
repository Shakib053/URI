#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{     
    int c=0;
    double sum=0;
    while(1)
    {
        double n;
      
        cin>>n;
        if(n>=0 && n<=10){
        c=c+1;
        sum=sum+n;
        }
        else 
        {
            cout<<"nota invalida\n";
        }
        if(c==2)
        {   
            cout<<"media = "<<fixed<<setprecision(2)<<sum/2<<endl;
            //break;
            while(1)
            {
            int x,cc=0;
            double s=0;
            cin>>x;
            
            if(x!=2)
            {
                cout<<"novo calculo (1-sim 2-nao)\n";
            if(x==1)
            {  
                while(1)
                {
                double a;
                //int cc=0;
                cin>>a;
                if(a>=0 && a<=10)
                {
                    s=s+a;
                    cc=cc+1;
                }
                if(cc==2)
                {
                    cout<<"media = "<<fixed<<setprecision(2)<<s/2<<endl;
                    cout<<"novo calculo (1-sim 2-nao)\n";
                    break;
                }
            
                }
            }
            else if(x<1 || x>2)
            {
              cout<<"novo calculo (1-sim 2-nao)\n";
            }
            }
            else
            {
            return 0;
            }
            }
        }
    }
    return 0;

}