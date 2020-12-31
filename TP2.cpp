#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int nombre1, nombre2, nombre3, Som, Prod;
    float moy;
    
    cout <<"entrez les trois nombres :"<<endl;
    cin>>nombre1>> nombre2>>nombre3;
    
    Som = nombre1+nombre2+nombre3 ;
    Prod = nombre1*nombre2*nombre3 ;
    moy = Som/3.0 ; // entier/entier== Float ( Alors en ajout .0 ou bien  (float)Som/3.0 ;)
    
    cout<<"La somme : "<<Som<<endl;
    cout<<"le prof : "<<Prod<<endl;
    cout<<"la moy : "<<moy<<endl;


    
    return 0;
}



