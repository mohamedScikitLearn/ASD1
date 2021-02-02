#include <iostream>
using namespace std;
int main()
{

    int n , inverse=0 ,nbr ;
    cout<<" Entrez votre nombre : ";
    cin>>n ; 
    
    nbr = n ;
    do
    {
        inverse =(inverse *10) + nbr %10; 
        nbr =nbr / 10; 
       
    } while (nbr > 0); 

 cout <<"Le nombre "<<n<<" Son inverse est : "<< inverse ;
} 
