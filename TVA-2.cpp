#include <iostream>
using namespace std; 

int main()
{
 
    float TVA, P_HT, P_TTC;
    
    cout <<"donner le prix hors taxes"<<endl;
    cin>>P_HT; 
    
    cout<<"(‘donner la valeur du TVA’)"<<endl;
    cin>>TVA;
    
    
    P_TTC = P_HT + (P_HT * TVA) ;


    cout<<"le prix TTC est: "<< P_TTC<<endl;
   
    
    return 0;
}