#include <iostream>
using namespace std;
int main()
{
	int i,n1, n2, essai=0;
	cout<<"Jeueur 1:\n";
	cout<<"=========\n";
	do
	{
		cout<<"Entrez un nombre compris entre 1 et 100:  ";
	    cin>>n1;
	}
	while ((n1<1)||(n1>100));
	
	system("cls");
	cout<<"Jeueur 2:\n";
	cout<<"=========\n";
	do
	{
		cout<<"Devinez le nombre :  ";
	    cin>>n2;
	    essai++;
	}
	while ((n1!=n2)&&(essai<5));
	if (n1!=n2)
	   cout <<"\nPERDU!\n";
	else
	   cout<<"\nGAGNE! \n" ;  
	system("pause");
	return 0;
}
