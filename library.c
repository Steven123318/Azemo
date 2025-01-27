#include "library.h" 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) {
  unsigned int result = 1;
   while ( value > 1 ) { 
        result *= value; 
         value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; 
} 
// exercice 1
void Salutation(){
	printf("Bonjour\n");
	
}

//exercice 2
void inverse(){
int Inverse, nbr;
   	     printf("entrer un nombre:\n");
   	   	 scanf("%d",&nbr);
			do {
				Inverse = (Inverse*10)+ (nbr%10);
				nbr=nbr/10;
			} while(nbr!=0);
			printf("le nombre inverse est: %d\n",Inverse);
			
		}
//exercice 3
float produit(float m, float n){
	float Produit;
printf("Entrer deux nombres reels:\n");
scanf("%f %f",&n,&m );
	Produit = n*m;
printf("le produit est %.3f\n",Produit);
     
     	return Produit;
}	
	
// exercice 4
void pariter(){
	 int X;
     	printf("Entrer votre nombre :\n ");
     	scanf("%d",&X);
     	 if(X%2 == 0)
     	         printf("Votre nombre est paire\n");
     	   else if(X%2 != 0)
     	          printf("Votre nombre est impaire\n");
}
		
// exercice 5
void superioriter(){
	int a,b;
    printf("Entrer deux nombre :\n");
    scanf("%d %d",&a,&b);
     if(a==b)
     	printf("a=b");
     	else if(a<b)
     		printf("%d<%d\n",a,b);
		 else 
     		printf("%d>d%\n",a,b);
}

// exercice 6
void croissance(){
	int a,b,c;
	printf("entrer trois nombres :\n");
	scanf("%d %d %d",&a,&b,&c);
  	if(a<b && b<c)
  		printf("Affichage croissant est: %d %d %d\n",a,b,c);
	else if(b<a && a<c)
		printf("Affichage croissant est: %d %d %d\n",b,a,c);
			   else if(b<c && c<a)
  	   	  	printf("Affichage croissant est: %d %d %d\n",b,c,a);
			   else if(c<a && a<b)
  	   	  	printf("Affichage croissant est: %d %d %d\n",c,a,b);
			   else if(c<b && b<a)
  	   	  	printf("Affichage croissant est: %d %d %d\n",c,b,a);
			 else if(a<c && c<b)
  	   	  	printf("Affichage croissant est: %d %d %d\n",b,a,c);
}

// exercice 16
	

     void Permutation(char *x, char *y)
	 {
	
     	char temp;
     	printf("x == %c\n y == %c\n",*x,*y);
     	temp = *x;
     	*x = *y;
     	*y = temp;
     	printf("x == %c\n y == %c\n",*x,*y);
     	
	 }
// exercice 17
void Somme (int a,int b){
     		int sum;
     		printf("entrer deux nombres:");
     		scanf("%d %d",&a,&b);
     		sum=a+b;
     		printf("la somme est %d",sum);
	}
	
			
			
			
			
			
			
			
			
			
