#include <iostream>
using namespace std;
int main()
{
	int n, i;
	string c;
	cout<<"Donnez le nombre de lignes: ";
	cin>>n;
	c="*";
	i=1;
	while (i<=n)
	{
		cout<<c<<"\n";
		c=c+"**";
		i++;
	}
	system("pause");
	return 0;
}
