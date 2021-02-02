#include <iostream>
using namespace std;
int main()
{
    int D, B, P;
    do
    {
	    cout<<"Donner un entier en binaire : " ;
		cin>>B;
	}
	while (B<1);
   
    P = 1 ; 
    D = 0 ;
    do
    {
       D=D+(B % 10)*P ; 
       P=2*P ; 
       B=B/10 ;
    }
   while (B!=0);
   cout<<"La valeur en decimale est : "<<D ;
}
