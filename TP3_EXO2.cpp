#include <iostream>
using namespace std;
int main()
{
    int i, n;
	double S, P;  //on utilise double: pour calculer les grands nombres 
	cout<<"Donnez un entier: ";
	cin>>n;
    S=0; P=1;
	for (i=1;i<=n;i++)
	{
	   S+=i;
	   P*=i;	
	}
	cout<<"S = "<<S<<"\n";
	cout<<"P = "<<P<<"\n";
	system("pause");
	return 0;	
	
}
