#include<stdio.h>
 #include<stdlib.h>
 
#include "library.c" 

int main( void ) 
{ 
float a,b;
char c='A',m='B';
int z,w;

   int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
 result = fact( 6 ); 
printf( "6! == %d\n", result ); 
//appel procedure exercice 1
Salutation();
// appel fonction exercice 2
inverse();
// appel fonction exercice 3
produit(a,b);

// appel fonction exercice 4
pariter();

// appel fonction exercice 5
superioriter();

// appel fonction exercice 6
croissance();

// appel fonction exercice 16

    Permutation(&c,&m);
     
// appel fonction exercice 17
 Somme (z,w);

return EXIT_SUCCESS; 
} 
