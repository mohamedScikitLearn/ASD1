#include <iostream>
using namespace std;
int main()
{
    int i, n;
	cout<<"Donnez un entier: ";
	cin>>n;
	cout<<"Table de "<<n<<"\n";
	cout<<"================\n";
    i=1;
	while (i<=10)
	{
	   cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
	   i++;	
	}
	
	system("pause");
	return 0;	
	
}
