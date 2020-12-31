
#include <iostream>
using namespace std;
int main()
{
    int A ; 
    
    cout<<"donner un nombre"<<endl;
    cin>>A;
    
    
 /*   
    Si (A=! 0 ) alors
    ecrire ('inverse est ', 1/A);
    sinon 
    ecrire ('on peut pas calculer l'inversede 0')
    */
    
     
    
    if (A != 0)
    
    cout<<"L'inverse de :"<<A<<"est :" <<(float) 1/A<<endl;
    
    else
    cout<<"A est 0, on peut pas calculer l'inverse de 0. "<<endl;
   
    
    
 

    return 0;
}
