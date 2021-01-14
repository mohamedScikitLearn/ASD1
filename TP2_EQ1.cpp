#include <iostream>
using namespace std;
int main()
{
	double A, B;
	
   cout<<"Donnez les 2 valeurs de A , B : " ;
   cin>>A>> B;
   if (A==0)
     {
	 if (B==0)
        cout<<"Infinité de solutions";
     else
        cout<<"Pas de solution";
     }
   else
     cout<<"X = "<<-B/A;
        
    return 0;
}


