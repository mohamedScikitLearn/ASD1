#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double A, B, C, D;
	
   cout<<"Donnez les 3 valeurs de A , B et C: " ;
   cin>>A>> B>> C;
   if (A==0)
      cout<<"Equation de 1er degré";
   else
   {
      D= B*B-4*A*C;
      if (D < 0 )
         cout<<"Pas de solution";
      else
         if (D == 0 )
            cout<<"X = "<<-B/2*A;
         else
            cout<<"X1 =  "<< (-B-sqrt(D))/(2*A) <<  "X2 =  "<< (-B+sqrt(D))/(2*A);
   }
   return 0;
}


