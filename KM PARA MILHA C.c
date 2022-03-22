#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float km, m;
	//DETERMINAR KM
	printf ("Digite os km:" );
	scanf ("%f", &km);
	//FORMULA
	m = km*(0.621371);
	//IMPRIMIR EM MILHAS
	printf ("\nMilhas: %0.1f", m);	
	return 0;
}
