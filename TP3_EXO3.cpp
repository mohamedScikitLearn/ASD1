#include <iostream>
using namespace std;
int main()
{
	int i,J,N,S  ;
    double E;
    do 
    {
	   cout<<"Donnez un nombre >=1 : ";
	   cin>>N ;
    }
	while (N<1);
    E=0 ; S=0;
    for( i=1 ; i<=N; i++ )
    {
      S=S+i;
      E=E+1.0/S;
    }
   cout<<"E = "<<E;
   return 0;
}
