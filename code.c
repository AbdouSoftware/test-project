#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
/* Générateur de nombres Premiers */ 
/* Inférieurs ou égaux à 4294967295 */ 
/* Auteur : Lemariey Jean-Philippe */ 
int main(int argc, char *argv[]) 
{ 
	div_t resultat; 
	int i = 3; 
	int j = 1; 
	int n = 0; 
	int r = 0; 
	double m = 0.0; 
	printf 
		("Ceci est un générateur de nombres Premiers inférieurs ou égaux à N \n"); 
	printf("Votre valeur de N svp : "); 
	scanf("%i", &n); 
	printf("\n 2 "); 
	while (i <= n) 
	{ 
		j = 2; 
		resultat = div(i, j); 
		r = resultat.rem; 
		m = sqrt((double)i);	// pas la peine de chercher au delà de 
							             	// racinecarrée i 
		while (j <= m && r != 0) 
		{ 
			j++; 
			resultat = div(i, j); 
			r = resultat.rem; 
		} 
		if (j > m) 
		{ 
			printf("%d ", i); 
		} 
		i += 2; //On ne teste que les nombres impairs 
	} 
	return 0; 
}