#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
 
    string s,s1,s2;
    cin>>s>>s1>>s2;
    if(s=="vertebrado")
    {
        if(s1=="ave")
        {
            if(s2=="carnivoro"){cout<<"aguia\n";}
            else if(s2=="onivoro"){cout<<"pomba\n";}
        }
        else if(s1=="mamifero")
        {
            if(s2=="onivoro"){cout<<"homem\n";}
            else if(s2=="herbivoro"){cout<<"vaca\n";}
        }
    }
    else if(s=="invertebrado")
    {
         if(s1=="inseto")
        {
            if(s2=="hematofago"){cout<<"pulga\n";}
            else if(s2=="herbivoro"){cout<<"lagarta\n";}
        }
        else if(s1=="anelideo")
        {
            if(s2=="hematofago"){cout<<"sanguessuga\n";}
            else if(s2=="onivoro"){cout<<"minhoca\n";}
        }
    }

    return 0;

}