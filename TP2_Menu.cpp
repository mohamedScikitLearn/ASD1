#include <iostream>
using namespace std;
int main()
{
	int c;
	double a,b;
	cout<<"Donnez deux nombre: ";
	cin>>a>>b;
	cout<<"********************Menu***********************\n";
	cout<<"1 : ---------------Somme-----------------------\n";
	cout<<"2 : --------------Produit----------------------\n";
	cout<<"3 : --------------Moyenne-----------------------\n";
	cout<<"4 : --------------Minimum-----------------------\n";
	cout<<"5 : --------------maximum-----------------------\n";
	cout<<"Donnez votre choix? ";
	cin>>c;
	switch (c)
	{
		case 1: cout<<"somme = "<<a+b; break;
	    case 2: cout<<"Produit = "<<a*b; break;
	    case 3: cout<<"Moyenne = "<<(a+b)/2; break;
	    case 4: if (a<b) cout<<"Minimum = "<<a; 
	            else     cout<<"Minimum = "<<b; break;
	    case 5: if (a>b) cout<<"Maximum = "<<a;
	            else     cout<<"Maximum = "<<b; break;
	    default: cout<<"erreur";
   }
}
