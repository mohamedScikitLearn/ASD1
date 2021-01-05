#include <iostream>
using namespace std; 

int main()
{
    const float TVA=0.206; // en c++
    float P_HT, P_TTC;
    
    cout <<"donner le prix hors taxes"<<endl;
    cin>>P_HT; //100
    
    P_TTC = P_HT + (P_HT * TVA) ;


    cout<<"le prix TTC est: "<< P_TTC<<endl;
   
    return 0;
}
