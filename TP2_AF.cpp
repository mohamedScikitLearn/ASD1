#include <iostream>
using namespace std;
int main ()
{
	const int M1=600, M2=300;   
	int NE, AF;
	cout<<"Donner le nombre d'enfants: ";
	cin>>NE;
	if (NE<=3)
	   AF=M1*NE;
	else
	   if (NE<=6)
	      AF=3*M1+(NE-3)*M2;
	   else
	      AF=3*(M1+M2);
	cout<<"Le montant des allocations familiales est: "<<AF<<"DA"<<endl;
	
	return 0;
}
