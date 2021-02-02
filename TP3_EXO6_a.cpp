#include <iostream>
using namespace std;
int main()
{
    int D, B,  P;
    do
	{
		cout<<"Donner un entier en dicimal compose de 3 chiffres: " ;
		cin>>D;
	}
	while ((D<100)||(D>=1000));
    B = 0 ;
    P = 1;
    do
    {
       B=B+P*(D % 2 );
       D=D/2 ; 
	   P=P*10;
    }
    while (D!=0);
    cout<<"La valeur en binaire est : "<<B ;
}

