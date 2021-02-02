#include <iostream>
using namespace std;
int main ()
{
	int i, S, R, N;
	do
	{
		cout<<"Donnez un nombre strictement positif: ";
		cin >>N;
	}
	while (N<1);
	
	i=1 ;  S=0 ; R=0 ;         
    while ( S<N)
    {
	   i=i+2 ;
	   S=S+i ;  
       R=R+1 ; 
    }
    cout<<"La partie entiere de: "<<N<<" est : "<<R;
      

}
